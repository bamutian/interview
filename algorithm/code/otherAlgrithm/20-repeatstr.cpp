#include<bits/stdc++.h>

using namespace std;

vector<string> repeatstring(string **values, int valuesRowLen, int *valuesColLen)
{
    multimap<string, int> vmap;
    vector<string> vstr;

    for (int i = 0; i < valuesRowLen; i++)
    {
        for (int j = 0; j < *valuesColLen; j++)
        {
            string str(values[i][j]);
            vmap.insert(pair<string, int>(str, 1));
        }
    }
    for (int i = 0; i < valuesRowLen; i++)
    {
        for (int j = 0; j < *valuesColLen; j++)
        {
            int a = vmap.count(values[i][j]);
            if (a == 3)
            {
                vstr.push_back(values[i][j]);
            }
        }
    }
    return vstr;
}

int main(){

    int row = 3;
    int col = 3;
    //申请空间
    string **a2 = new string *[row];
    for (int i = 0; i < row; i++)
        a2[i] = new string[col];
    vector<string> res;
    res = repeatstring(a2,row,&col);
    for(int i= 0;i<res.size();i++)
    {
        cout<<res[i]<<endl;

    }
    

    

    return 0;
}
