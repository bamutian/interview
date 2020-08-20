#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    vector<int> vecint;
    vecint.push_back(2);
    vecint.push_back(3);
    vecint.push_back(5);
    vecint.push_back(1);
    vecint.push_back(6);
    sort(vecint.begin(),vecint.end());
    for (int i = 0; i < vecint.size(); i++)
    {
        /* code */
        cout<<vecint[i]<<endl;
    }
    
    return 0;
}


