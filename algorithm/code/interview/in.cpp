#include <stdio.h>
#include <windows.h>
#include <iostream>

using namespace std;

void Func(char str[100])
{
 cout<<sizeof(str)<<endl;
       
}


int main(){
    
    int a = 4;
    char str1[]="heldddlo";
    // char * p=str1;
    // int n=10;
    // cout<<sizeof(str1)<<endl;
    // cout<<sizeof(p)<<endl;
    //Func(str1);
    void *p1 = malloc( 100 );
    cout<<sizeof(p1)<<endl;
    
    return 0;
}
