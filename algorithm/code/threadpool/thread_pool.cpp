#include "thread_pool.h"

void Thread_pool::push_task(Thread_task *task)
{
    _tasks.emplace(task);
}

void Thread_pool::add_thread()
{
    std::atomic_bool *flag = new std::atomic_bool;
    _threads.push(flag);
    flag->store(true);
    std::thread(&Thread_pool::thread_run, this, flag).detach(); // 开启线程
}

void Thread_pool::thread_run(std::atomic_bool *thread_flag)
{
    while (*thread_flag)
    {
        /* code */
        std::shared_ptr<Thread_task> task;
        bool is_pop = _tasks.pop(task);
        if (is_pop)
        {
            /* code */
            task->task();
        }else
        {
            
            std::this_thread::yield(); //让操作系统调用其他线程
        }
        
        
    }
    delete thread_flag;

}

void Thread_pool::del_thread()
{
    _threads.front()->store(false);
    _threads.pop();
}

void Thread_pool::del_all()
{

    while(!_threads.empty())
    {
        del_thread();
    }
}

int Thread_pool::conut() const
{
    return _threads.size();
}