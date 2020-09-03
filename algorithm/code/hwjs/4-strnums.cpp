#include<bits/stdc++.h>

using namespace std;

/* 
编写一个函数，计算字符串中含有的不同字符的个数。
字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
输入
 */


int main(){
    
    map<char,int> mapv;
    string str;

    cin>>str;
    int len;
    len = str.size()-1;
    while (len>=0)
    {
        mapv[str[len]] = 1;
        len--;
    }
    cout<<mapv.size()<<endl;

    // for(auto vale:mapv)
    // {
    //     cout<<vale.first<<" "<< vale.second<<endl;
    // }
    
    
    return 0;
}
