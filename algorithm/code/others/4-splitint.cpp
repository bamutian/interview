#include <stdio.h>
#include <windows.h>
#include <iostream>
using namespace std;


// 拆分整数
int main(){
    
    int n = 19;
    cin>>n;
    int sum = 0,m;
    m=n;
    while(m!=0)
    {
        n = m%10;
        m = m/10;
        sum = sum +n*n;
    }
    cout<<sum<<endl;

    return 0;
}
