#include <stdio.h>
#include <windows.h>
#include<string>
#include<iostream>
#include <algorithm>
#include <queue>
using namespace std;



long getFactorial1(int n)
{
    if(1==n)
    {
        return 1l;
    }
    return (long)n*getFactorial1(n-1);
}

long getFactorial2(int n){
    long result =1l;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        result *= i;
    }
    return result;
    
}


void hannuota(int N,string from, string to, string help)
{
    if(N==1)
    {
        cout<<"move 1 from "+from+" to "+ to<<endl;

    }else
    {
        /* code */
        hannuota(N-1,from,help,to);  // from->help
        cout<< "move  " + to_string(N) + " from "+ from + " to " + to <<endl;    // 单独挪动N
        hannuota(N-1,help,to,from);  //  n-1 help->to

    }
    



}



void printAllSubsquence(vector<char> &str, int i, string res){
    if(i==str.size())
    {
        cout<<res<<endl;
        return;

    }

    printAllSubsquence(str,i+1,res);
    printAllSubsquence(str,i+1,res+str[i]);


}
int main(){
    
    // 求N！的值
    // long res = getFactorial1(4);
    // long res2 = getFactorial2(4);
    // cout<<res<<endl;
    // cout<<res2<<endl;

    // 汉诺塔问题
    // hannuota(3,"左","右","中");

    // 打印所有的子序列
    vector<char> str;
    str.push_back('a');
    str.push_back('b');
    str.push_back('c');
    printAllSubsquence(str,0," ");



    return 0;
}
