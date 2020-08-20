// #include<string>
// #include<iostream>
// #include <cstdlib>
// #include<windows.h>
// #include <ctime>
// using namespace std;


// HANDLE hMutex;	//定义互斥对象句柄


// class Card
// {
// private:
//     /* data */
//     double money;
//     string name;
//     int cardNums;
//     string VIPLevel;
// public:
//     Card(string name,string VIPLevel,double money)
//     {
//         this->money = money;
//         this->name = name;
//         this->VIPLevel = VIPLevel;
//         srand((int)time(0));
//         cardNums = rand()%100000;

//     }

//     // 取款
//     double getMoney(int m)
//     {
//         if (m<0)
//         {
//             return m;
//         }
//         if (this->money<=0)
//         {
//             return 0;
//         }
//         WaitForSingleObject(hMutex, INFINITE);
//         this->money = this->money-m;
//         ReleaseMutex(hMutex);
//         return m;
        
//     }
//     // 查询余额
//     double queryMoney()
//     {
//         return this->money;
//     }
//     // 存款
//     void saveMoney(int m )
//     {
//         if(m<=0)
//         {
//             return;
//         }
//         WaitForSingleObject(hMutex, INFINITE);
//         this->money = this->money+m;
//         ReleaseMutex(hMutex);

//     }
//     // 销毁

//     // 设置VIPlevel
//     void setVIPLevel(string VIPlevel)
//     {
//         this->VIPLevel = VIPlevel;

//     }

//     ~Card();
// };


