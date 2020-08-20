#include <bits/stdc++.h>
using namespace std;

/* 
问题：跳舞机，用WSAD四个字母分别表示上下左右，跳对了+20分，跳错了-10分，但是分数最低为0，不会为负值
输入：两行字符串，保证字符串全部由大写的WSAD字母组成，且保证两行字符串长度相等
输出：最终得分

 */
int main(int argc, char const *argv[])
{
    /* code */

    string str1("");
    getline(cin, str1);
    string str2("");
    getline(cin, str2);
    long sum = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        /* code */
        if (str1[i]==str2[i])
        {
            /* code */
            sum = sum + 20;
        }
        else
        {
            sum=sum-10;
            if (sum<=0)
            {
                /* code */
                sum=0;
                continue;
            }
            
        }
            
    }
    cout << sum;

    return 0;
}
