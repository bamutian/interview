#include<bits/stdc++.h>
using namespace std;


/* 
斐波那契数列。动态规划

 */
int main(){

    string str;
    int n ;
    getline(cin,str);
    int lens = str.size();
   for(int j=0;j<lens;j++)
    {
        if(!isdigit(str[j]))
        {
            cout<<0<<endl;
            return 0;
        }
    }
    

    n = atoi(str.c_str());
    // vector<int> dp(n+1,0);
    int *dp = new int[n+1];
    for(int i=0;i<=n;i++)
    {
        if(i<3)
        {
            dp[i]=i;
        }else
        {
            /* code */
            dp[i] = dp[i-1]+dp[i-2];
        }
        
    }
    cout<<dp[n]<<endl;
    return 0;
}
