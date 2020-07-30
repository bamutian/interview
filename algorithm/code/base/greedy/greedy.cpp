#include <stdio.h>
#include <windows.h>
#include<string>
#include<iostream>
#include <algorithm>
#include <queue>
using namespace std;





// 1，字符串数组 
// 拼接所有字符串，找到拼接字典序最小的结果
// 1,两两比较
// 2，排序
// 3，排序之后的字符串数组拼接
bool compare(string a,string b)
{
    if (a+b>b+a)
    {
        return false;
    }else
    {
        return true;
    }
    
    
} 
string lowestString(string *strs,int length)
{
    if (strs ==NULL || length==0)
    {
        return "";
    }
    sort(strs,strs+length,compare);
    string res = "";
    for (int i = 0; i < length; i++)
    {
        /* code */
        res +=strs[i];
    }
    return res; 

} 



// 切金条
// 属于哈夫曼树
// 1，建立小根堆
// 2，计算和之后再计算小根堆
// 3，最后计算总共的
int lessMoney(int *arr,int length)
{

    priority_queue<int,vector<int>,greater<int> > pQ;
    // 加入元素到小根堆
    for (int i = 0; i < length; i++)
    {
        /* code */
        pQ.push(arr[i]);

    }
    int sum = 0;
    int cur = 0;

    while (pQ.size()>1)
    {
        /* code */
        int a = pQ.top();
        pQ.pop();
        int b = pQ.top();
        pQ.pop();
        cur = a+b;
        sum += cur;
        pQ.push(cur);

    }
    return sum;
    
}


// 投资项目
class Project
{
public:
    /* data */
    int p;
    int c;

public:
    Project(){}
    Project(int tempP,int tempC ){
        this->p=tempP;
        this->c = tempC;
    }

};


// cost 比较器
template<typename T>
struct minCostCompare //重写仿函数
{
    bool operator() (T pro1,T pro2)
    {
        return pro1.c > pro2.c; // 小根堆
    }
};


// 收益比较器
template<typename T>
struct maxProfitCompare //重写仿函数
{
    bool operator() (T pro1,T pro2)
    {
        return pro1.p < pro2.p;  //大顶堆
    }
};


// 贪心法计算收益
// 1，小根堆建立花费最小
// 2，大根堆建立收益最大
// 3，从大根堆里面获得收益最大的值
int findMaximizedCapital(int k,int W,int* profits,int* Captital,int length)
{
    // 1，建立项目
   vector<Project> pro;
   for (int  i = 0; i < length; i++)
   {
       /* code */
       pro.push_back(Project(profits[i],Captital[i]));
   }

   priority_queue<Project,vector<Project>,minCostCompare<Project>> minCostQ;
   priority_queue<Project,vector<Project>, maxProfitCompare<Project> > maxProfitQ;
    // 加入小根堆
   for (int i = 0; i < length; i++)
    {
        /* code */
        minCostQ.push(pro[i]);
    }
    

   // 投资
   for (int i = 0; i < k; i++)
   {
       /* code */
       while (!minCostQ.empty() && minCostQ.top().c <=W)
       {
           /* code */
           
           maxProfitQ.push(minCostQ.top());
           minCostQ.pop();
       }
       // 有可能不能投资K个项目，不满足条件
       if(maxProfitQ.empty())
       {
           return W;
       }
       W+=maxProfitQ.top().p;
       maxProfitQ.pop();
       
   }


    return W;

}


int main(){

    // 字符串数组
    // string str [3] ={"ab","ef","bc"};
    // string resStr = lowestString(str,3);
    // cout<<resStr<<endl;
    // 分金块
    // int test[]={10,20,30,40};
    // int res = lessMoney(test,4);
    // cout<<"总共最低花费:";
    // cout<<res<<endl;
    // 投项目
    int k=2;
    int W=100;
    int profit[] = {30,20,10};
    int cost [] ={50,30,40};
    int len = 3;
    int res = findMaximizedCapital(k,W,profit,cost,len);  
    cout<<"投资项目总的：";
    cout<<res<<endl;




    return 0;
}
