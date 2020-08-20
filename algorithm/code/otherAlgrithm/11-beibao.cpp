#include<bits/stdc++.h>
using namespace std;

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
#define n 4
void possible_solution(int x[n])
{
    int i;
    for (i = 0; i < 4; i++) //n=4,有2^4-1种解法
        if (x[i] != 1)
        {
            x[i] = 1;
            return; //从遇到的第一位开始，若是0，将其变成1，然后结束循环，得到一种解法
        }
        else
            x[i] = 0;
    return; //从第一位开始，若是1，将其变成0，然后继续循环，若再循环的时候遇到0，则将其变为1，结束循环。得到另一种解法。
}

void qiongqu()
{
    int count = 0;
    int w[n] = {2, 3, 4, 5}, v[n] = {3, 4, 5, 6};
    int x[n] = {0, 0, 0, 0}, y[n] = {0, 0, 0, 0};
    int tw, tv, tv1 = 0, limit = 8;
    int j;
    for (j = 1; j <= 15; j++)
    {
        possible_solution(x);
        count++;
        for (int i = 0; i < 4; i++)
        {
            cout << x[i] << " ";
        }
        cout << endl;
        tw = x[0] * w[0] + x[1] * w[1] + x[2] * w[2] + x[3] * w[3];
        tv = x[0] * v[0] + x[1] * v[1] + x[2] * v[2] + x[3] * v[3];
        if (tw <= limit && tv > tv1)
        {
            tv1 = tv;
            y[0] = x[0];
            y[1] = x[1];
            y[2] = x[2], y[3] = x[3];
        }
    }
    cout << "共有" << count << "种解法." << endl;
    printf("其中0-1背包问题的最优解为： y=(%d,%d,%d,%d)\n", y[0], y[1], y[2], y[3]);
    printf("总价值为：%d", tv1);
}

int main()
{

    qiongqu();
     return 0;
}
