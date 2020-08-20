
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k, c;
    cin>>n;
    k=c=1;
    while (k<n)
    {
        k=k*10+1;
        c++;
    }
    while(k%n)
    {
        k=k%n*10+1;
        c++;
    }
    cout<<c;
    
    

    return 0;
}

