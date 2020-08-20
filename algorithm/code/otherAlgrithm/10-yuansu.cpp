#include<bits/stdc++.h>
using namespace std;

/* 
只有地火水风四种元素平衡的时候才是绝对安全的，某魔法师给自己做了一个体验，
发现自己体内的四种元素分别是A，B,C,D,魔法师慌了，
这是他看到魔法书中记载了一种转换魔法，可以把任意两个单元的元素转换成任意元素，
请问魔法师是否可以通过这种魔法，在保证自己体内元素总量尽可能多的情况下，
是的自己体内的四种元素数量相同，如果可以，请输出平衡后体内元素总量，如果不能请输出-1；
 */
int main()
{
    int a, b, c, d; //变量的声明
    vector<int> vec;
    cin >> a >> b >> c >> d;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);
    
    sort(vec.begin(),vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cout<<"排序结果：";
        cout << vec[i] << endl;
    }

    while (vec[3]-vec[0]>=2)
    {
        /* code */
        vec[3]= vec[3]-2;
        vec[0]= vec[0]+1;
        sort(vec.begin(), vec.end());
        for (int i = 0; i < vec.size(); i++)
        {
            /* code */
            cout << "排序结果li：";
            cout << vec[i] << endl;
        }
    }
    int sum = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        sum = sum +vec[i];

    }
    cout<<"sum:";
    cout<<sum<<endl;
    
    

    return 0;
}