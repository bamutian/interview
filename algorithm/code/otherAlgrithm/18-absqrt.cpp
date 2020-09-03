#include<bits/stdc++.h>
using namespace std;


/* 

500内找加上a或b都为完全平方数的数
 */
int main(){
    int a = 100,b=200;

    int i ,x,y,z;

    
    for(int i=1;i<500;i++)
    {
        x= sqrt(i+a);
        if(x*x==i+a&&y*y==i+b)
        {
            cout << i << endl;
        }
        
    }
    return 0;
}
