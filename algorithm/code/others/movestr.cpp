#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// 右移动字符串如helloworld  2 变成    ldhellwor


void reversestr(char*begin, char *end)
{
    char temp;
    while(begin<end)
    {
        temp = *begin;
        *begin++ = *end;
        *end = temp;
        end--;
    }
}


string& movestr(int num,const string& str)
{
    string strleft("");
    string strright("");
    int strlens = str.size();
    for (int i = 0; i < strlens; i++)
    {
        if (i < strlens-num)
        {
            strleft.push_back(str[i]);

        }else
        {
            strright.push_back(str[i]);
            
        }
        
        
        
    }
    string res("");
    res.append(strright);
    res.append(strleft);
    cout<<res<<endl;

    
}

int main(){

    // 方法1
    // char str [] = "123456789";
    // int num = 8;
    // int nlen = strlen(str);
    // reverse(str, str+nlen-1);
    // reverse(str,str+num-1);
    // reverse(str+num,str+nlen-1);
    // cout<<str<<endl;
    // 方法2
    // string str("123456789");
    // movestr(3, str);

    // 方法3
    string str1("123456789");
    int num = 3;
    std::reverse(str1.begin(), str1.end());
    std::reverse(str1.begin(), str1.begin()+num);
    std::reverse(str1.begin()+num, str1.end());
    cout<<str1<<endl;


    return 0;
}
