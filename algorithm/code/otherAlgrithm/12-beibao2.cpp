#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/* 0-1 背包问题*/
int tableTwo[10][100];
int flag[10] = {-1};

int KnapsackTwo(vector<int> v, vector<int> w, int c, int n)
{ //此方法从n->1计算 。自底向上，自左向右
    int jMax = min(w[n] - 1, c);
    for (int j = 0; j < jMax; j++)
        tableTwo[n][j] = 0; //j<当前背包容量或者当前物品重量时，tableTwo[n][j]=0;
    for (int j = w[n]; j <= c; j++)
        tableTwo[n][j] = v[n]; //当前背包容量可以装得下时， tableTwo[n][j]=v[n];
    for (int i = n - 1; i > 1; i--)
    {
        jMax = min(w[i], c);
        for (int j = 0; j <= jMax; j++)
            tableTwo[i][j] = tableTwo[i + 1][j];
        for (int j = w[i]; j <= c; j++)
            tableTwo[i][j] = max(tableTwo[i + 1][j], tableTwo[i + 1][j - w[i]] + v[i]); //当前背包容量装得下，但是要判断其价值是否最大，确定到底装不装
    }
    tableTwo[1][c] = tableTwo[2][c]; //先假设1物品不装
    if (c >= w[1])
        tableTwo[1][c] = max(tableTwo[1][c], tableTwo[2][c - w[1]] + v[1]); //根据价值，判断到底装不装
    return tableTwo[1][c];                                                  //返回最优值
}

void Traceback(vector<int> w, int c, int n)
{ //根据最优值，求最优解
    for (int i = 1; i < n; i++)
    {
        if (tableTwo[i][c] == tableTwo[i + 1][c])
            flag[i] = 0;
        else
        {
            flag[i] = 1;
            c -= w[i];
        }
    }
    flag[n] = tableTwo[n][c] ? 1 : 0;
}

/* 
0 - 1背包问题：给定n种商品和一个给定固定容量的背包。物品 i 的重量是W[ i ]，价值为V[ i ]，背包的容量为C。
问应当如何选择装入背包中的物品，是的装入背包中的物品的总价值最大？
注意：0 - 1背包的前提是对于同一个物品，要么放，要么不放，
不能把物品 i 放入到背包多次，也不能只装入部分的物品 i 。因此该问题称为 0 - 1问题。
那么我们对于物品的选择有两点需要注意：
①不能放不进背包，c < s[ i ]，也就是背包的体积比较小。②能放入背包，
拿的话这个物品就会给背包增加价值，不拿的话就会有其他情况。
那么最笨的方法就是穷举法，然后去挑选。
但是很明显，这个问题是有最优子结构的，
所以我们想到了用动态规划来考虑这个问题。
设W = {w1,w2,...,wk}是全局最优解，则M = {w1,...,w(k-1)}一定是 c-s[ k ] 的最优解。
设V[i,j]表示将前 i 件物品放入到容量为 j 的背包中的最大价值。

 */
int main()
{
    int num; //商品数量
    int sum; //背包可容纳总重量
    cin >> num >> sum;
    vector<int> weight; //商品的重量
    vector<int> price;  //商品的价格

    cout << "请依次输入物品的重量：";
    weight.push_back(0);
    price.push_back(0);
    for (int i = 0; i < num; i++)
    {
        int tmp1;
        cin >> tmp1;
        weight.push_back(tmp1); //把重量的数据存入到数组中
    }
    cout << endl;

    cout << "请依次输入物品的价格：";
    for (int i = 0; i < num; i++)
    {
        int tmp2;
        cin >> tmp2;
        price.push_back(tmp2); //把价格的数据存入到数组中
    }
    cout << endl;

    cout << "总价值最大为：" << KnapsackTwo(price, weight, sum, num) << endl;
    Traceback(weight, sum, num);
    cout << "最优值的解：";
    for (int i = 1; i < num + 1; i++)
        cout << flag[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}