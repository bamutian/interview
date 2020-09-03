#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    /**
     * 
     * @param person int整型一维数组 
     * @param personLen int person数组长度
     * @return int整型
     */
    int house(int *person, int personLen)
    {
        // write code here
        
        
        int res = personLen;
        if (personLen <= 0)
        {
            /* code */
            return res;
        }
        vector<int> temp(personLen,1);

        for(int i=0;i<personLen-1;i++)
        {
            if (person[i]>person[i+1])
            {
                /* code */
                temp[i] = temp[i] + 1;
                if (temp[i] < temp[i + 1])
                {
                    /* code */
                    temp[i]=temp[i]+1;
                }
            }
            
            
            
        }
        for(int i=0;i<personLen-1;i++)
        {
            if (person[j] > person[j +-1])
            {
                /* code */
                temp[j] =temp[j] + 1;
                if (temp[j] > temp[j - 1])
                {
                    /* code */
                    temp[j] + temp[j] + 1;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < personLen - 1; i++)
        {
            sum= sum+temp[];
        }
        return sum;
    }
};

int main(){
    
    
    return 0;
}
