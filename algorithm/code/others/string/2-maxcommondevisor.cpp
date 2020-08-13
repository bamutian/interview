#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
//#include <stdio.h>
#include <string.h>
using namespace std;


/* 最大公约数 */
int main()
{
    /* 方法1：辗转相除法
    1，a%b得余数c
    2,若c=0,则b即为两数得最大公约数
    3，若c≠0，则a=b,b=c,再回去执行1
     */
    // 获得字符串
    // string strs("");
    // getline(cin, strs);
    // vector<int> vstr;
	// char* ptr = strtok((char*)strs.c_str(), " ");
	// while (ptr != NULL){
	// 	vstr.push_back(atoi(std::string(ptr).c_str()));
	// 	ptr = strtok(NULL, " ");
    // }
    // int a = vstr[0];
    // int b = vstr[1];
    // int c;

    // while(true)
    // {
    //     c=a%b;
    //     if(c==0)
    //     {
    //         break;
    //     }else
    //     {
    //         a=b;
    //         b=c;
    //     }
    // }
    // cout<<b<<endl;

    /*
     ① 若a>b，则a=a-b
    ② 若a<b，则b=b-a
    ③ 若a=b，则a（或b）即为两数的最大公约数
    ④ 若a≠b，则再回去执行①
     */
    // 获得字符串
    string strs("");
    getline(cin, strs);
    vector<int> vstr;
	char* ptr = strtok((char*)strs.c_str(), " ");
	while (ptr != NULL){
		vstr.push_back(atoi(std::string(ptr).c_str()));
		ptr = strtok(NULL, " ");
    }
    int a = vstr[0];
    int b = vstr[1];
    int c;
    while (true)
    {
        if(a>b)
        {
            a=a-b;
        }
        if(b>a)
        {
            b=b-a;
        }
        if (a==b)
        {
            break;
        }
        
    }
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    
    return 0;
}