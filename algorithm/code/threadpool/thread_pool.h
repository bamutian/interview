#ifndef  THREAD_POOL_H
#define THREAD_POOL_H
#include<queue>
#include<thread>
#include<memory>
#include<atomic>
#include "safe_queue.h"



class Thread_task
{
public:
    virtual void task()=0;

};



// 启动线程，不断地检测任务队列
class Thread_pool
{
private:
    /* data */
    Safe_queue<std::shared_ptr<Thread_task>> _tasks; // 任务队列
    std::queue<std::atomic_bool *> _threads;  //线程标志
private:
    void thread_run(std::atomic_bool *thread_flag); //运行

public:
    void push_task(Thread_task *task);
    void add_thread();
    void del_thread();
    void del_all();
    int conut() const;
    
};









#endif