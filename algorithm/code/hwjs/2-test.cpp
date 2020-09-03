#include<bits/stdc++.h>
using namespace std;

void split(string& str)
{

    if (str.size() <= 8)
    {
        int nums2 = 8 - str.size();
        string temstr(nums2, '0');
        str.append(temstr);
        cout << str << endl;
    }
    else if (str.size() > 8)
    {

        string tempstr = str.substr(0, 8);
        cout << tempstr << endl;
        string tempstr2 = str.substr(8);
        split(tempstr2);
    }
}
/* 
•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
 */
int main(){

    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);
    if (str1!=" ")
    {
        split(str1);
        
    }
    if (str2!=" ")
    {
        split(str2);
    }
    
    
    
    return 0;
}
