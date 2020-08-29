#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;
    vector<vector<int>> a;

    for (int i = 0; i < N; i++)
    {
        vector<int> temp(N,-1);
        a.push_back(temp);

    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            string str;
            cin >> str;
            a[i][j] = atoi(str.c_str());
        }
    }
    vector<int> job(N,-1);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int loc = a[i][j] - 1;
            if (job[loc] == -1)
            {
                /* code */
                job[loc] = i + 1;
                break;
            }
            else
            {
                continue;
            }
        }
    }

    for(int i= 0;i<N;i++)
    {
        for(int j = 0;j<N;j++)
        {
            if (job[j]==i+1)
            {
                /* code */
                cout << j + 1<<" ";
            }
            
        }
    }
    return 0;
}
