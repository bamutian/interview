#include <iostream>
#include <thread>

using namespace std;

void th_function()
{
    std::cout << "hello thread." << std::endl;
}

int main(int argc, char *argv[])
{
    std::thread t(th_function);
    t.join();

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(int argc, char *argv[])
// {
//     vector<int> heap = {9, 8, 7, 6, 5, 4, 3, 2, 1};
//     for (vector<int>::iterator it = heap.begin(); it != heap.end(); it++)
//     {
//         cout << (*it) << endl;
//     }
//     return 0;
// }