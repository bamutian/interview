#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;


// 全部遍历
void isinter(int target, vector<vector<int>> &array)
{
    int rows = array.size();
    int cols = array[0].size();
    int re = -1;
    for (int i = 0; i < rows; i++)
    {
        /* code */
        for (int j = 0; j < cols; j++)
        {
            /* code */
            if (target==array[i][j])
            {
               re=array[i][j];
            }
            
        }
        
    }
    cout<<"re:"<<re<<endl;
    
}



int main()
{
    vector<int> a;
    vector<int> b;
    vector<vector<int>> arr;
    a.push_back(1);
    a.push_back(2);
    a.push_back(9);
    a.push_back(10);
    b.push_back(3);
    b.push_back(4);
    b.push_back(11);
    b.push_back(12);
    arr.push_back(a);
    arr.push_back(b);

    isinter(11, arr);

    return 0;
}