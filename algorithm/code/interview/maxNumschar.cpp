

#include<iostream>

using namespace std;


// 字符串中最长的字符
// aaabbccccc 输出：c,5
int main()
{

    int curNums=0;
    int maxNums = -1;
    char maxStr;
    char proStr;
    int nums;
    char strs[1000];
    cin>>strs;
    proStr=strs[0];
    for (int i = 0; strs[i] != '\0'; i++)
    {
        nums=i;
        if (strs[i]==proStr)
        {
            curNums++;
        }else
        {
            if (curNums>maxNums)
            {
                maxNums=curNums;
                maxStr=strs[i-1];
            }
            curNums=1;
            proStr = strs[i];
            
        }
        
    }
     if (curNums>maxNums)
    {
        maxNums=curNums;
        maxStr=strs[nums];
    }

    cout<<maxNums<<","<<maxStr<<endl;
    
    

    return 0;
}