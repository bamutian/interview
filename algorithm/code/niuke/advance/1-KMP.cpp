#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 暴力算法，查找子串
void baolialgorithm()
{

    // 判断边界：


    // 判断字串
    string str1("aaaaabbbccc");
    string str2("ab");
    int n = 0;
    int index = 0;
  
    // 长串
    for (int i = 0; i < str1.size(); i++)
    {
        int j = i;
        n=0;
            /* 子 */
        while (n < str2.size() && str1[j] == str2[n])
        {
            n++;
            j++;
        }
        if (n==str2.size())
        {
            /* code */
            index = i;
        }
    }
    

    cout << "index:" << index << endl;
}

// 库函数
void libfunc()
{
    string str1("aaaaabbbccc");
    string str2("ab");
    int n;
    if ((n = str1.find(str2)) != string::npos) //查找 u 出现的位置
        cout << "1) " << n << "," << str1.substr(n,str2.size()) << endl;
}

int main()
{
    libfunc();
    // baolialgorithm();

    return 0;
}
