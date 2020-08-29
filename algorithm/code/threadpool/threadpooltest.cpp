#include "thread_pool.h"
#include <iostream>

class task1 : public Thread_task
{
public:
    void task() override
    {
        std::cout<<"task1 run..."<<std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

};

class task2 : public Thread_task
{
public:
    void task() override
    {
        std::cout << "task2 run..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
};

int main(){
    Thread_pool threads;
    threads.push_task(new task1());
    // for (int i = 0; i <100; i++)
    // {
    //     /* code */
    //     if(i%2)
    //     {
    //         threads.push_task(new task1());
    //     }else
    //     {
    //         threads.push_task(new task2());
    //     }
        
    // }

    // threads.add_thread();
    // threads.add_thread();
    // threads.add_thread();

    return 0;
}
