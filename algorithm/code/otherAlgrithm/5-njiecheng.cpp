#include <stdio.h>
#include <windows.h>
#include <iostream>
using namespace std;

int jisuan(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        sum  = sum*i;
    }
    return sum;
    
}


int main ()
{
    int n = 3;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        sum = sum+jisuan(i);
    }
    cout<<sum<<endl;
    
    

    return 0;
}