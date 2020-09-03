#include<bits/stdc++.h>
using namespace std;

int main(){
    // 方法1
    // multimap<char,int> vmap;
    // string str;
    // cin>>str;
    // for(auto c:str)
    // {
    //     vmap.insert(std::make_pair(c,1));

    // }
    // string c;
    // cin>>c;
    // for(auto it:vmap)
    // {
    //     cout<<it.first<<"  "<<it.second<<endl;
    // }    
    // int sum;
    // if (isalpha(c[0]))
    // {
    //     /* code */
    //     transform(c.begin(), c.end(), c.begin(), ::toupper);

    //     int a = vmap.count(c[0]);
    //     transform(c.begin(), c.end(), c.begin(), ::tolower);
    //     int b = vmap.count(c[0]);
    //      sum = a + b;
    // }else
    // {

    //     sum = vmap.count(c[0]);
    // }
    // cout<<sum<<endl;

    string str;
    getline(cin, str); //见1中的第三点

    char ch;
    //cin>>ch; //见1中的第一点//无法判断空格，遇到空格就结束了
    ch = getchar(); //这样可以判断空格

    int count = 0;
    for (int i = 0; i < str.length(); i++) //见2
    {
        if (ch == str[i]) //数字、空格、字母（大小写刚好吻合时）都能判断
        {
            count++;
        }
        else if (ch == str[i] + 32 && str[i] >= 'a' && str[i] <= 'z') //以下两个if为了不区分字母大小写//后面的&&为了避免某些数字+32变成大写字母的误判
        {
            count++;
        }
        else if (ch == str[i] - 32 && str[i] >= 'A' && str[i] <= 'Z')
            count++;
    }
    cout << count << endl;
    return 0;
}
