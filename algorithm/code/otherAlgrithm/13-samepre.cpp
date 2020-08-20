#include<bits/stdc++.h>
using namespace std;

void test()
{
    int len;
    cin>>len;
    string str(200,'a');
    cout << str << endl;
    for (int i = 0; i < len; ++i)
    {
        /* code */
        int k;
        cin>>k;
        str[k] = str[k] == 'a' ? 'b' : 'a';
        cout << str << endl;
    }

}


// 输出相同前缀数量的字符串

int main(){
    
    int x ;
    cin>>x;

    for (int i = 0; i < x; ++i)
    {
        /* code */
        test();
    }
    
    return 0;
}
