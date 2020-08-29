#include <iostream>
#include <mingw.thread.h>

using namespace std;

void th_function()
{
    std::cout << "hello thread." << std::endl;
    
}

int main()
{
    thread t(th_function);
    t.detach();
    cout<<"111111111111111";

    
    // getchar();

    

    return 0;
}