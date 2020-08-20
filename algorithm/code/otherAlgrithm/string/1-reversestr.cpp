#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


// 反转字符串abc->cba
int main()
{
    string str("");
    getline(cin,str);
    // stl里面的反转
    reverse(str.begin(), str.end());
    cout<<str<<endl;
     
}