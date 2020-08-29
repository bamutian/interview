#ifndef SAFE_QUEUE_H
#define SAFE_QUEUE_H
#include<list>
#include<mutex>

template<typename Type>
class Safe_queue
{
private:
    /* data */
    std::list<Type> _safe_queue;
    std::mutex _mutex;
public:
    using cvalue_type = Type;
    using cpointer = Type*;
    using creferenced = Type&;
    using cconst_referenced = const Type&;

    template<typename... Args>
    void emplace(Args&&... args)
    {
        std::lock_guard<std::mutex> lock(_mutex);
        _safe_queue.emplace_back(args...);

    }

    bool pop(creferenced value)
    {
        std::lock_guard<std::mutex> lock(_mutex);
        if (_safe_queue.empty())
        {
            /* code */
            return false;
        }
        value = _safe_queue.front();
        _safe_queue.pop_front();
        return true;  
    }

    
};









#endif 

