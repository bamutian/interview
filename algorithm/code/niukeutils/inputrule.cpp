
#include <bits/stdc++.h>
using namespace std;



/* 输入
    输出规则
 */
// 获得字符串
int main(int argc, char const *argv[])
{
    /* code */
    /* 输入字符数组 
        输入一行字符串 空格隔开
        转换成vector 数字
    */
    // string strs("");
    // getline(cin, strs);
    // vector<int> vstr;
    // char *ptr = strtok((char *)strs.c_str(), " ");
    // while (ptr != NULL)
    // {
    //     vstr.push_back(atoi(std::string(ptr).c_str()));
    //     ptr = strtok(NULL, " ");
    // }

    /* 
    输入有两行，第一行n
    第二行是n个空格隔开的字符串 
    */

    // int num;
    // cin >> num;
    // vector<string> v;
    // string val;
    // while (num--)
    // {
    //     cin >> val;
    //     v.push_back(val);
    // }
    // sort(v.begin(), v.end());
    // unsigned long len = v.size();
    // for (int i = 0; i < len - 1; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << v[len - 1];


    /* 
    多个测试用例，每个测试用例一行。
    每行通过空格隔开，有n个字符，n＜100
     */
    // string input;
    // while (getline(cin, input))
    // {
    //     istringstream iss(input);
    //     string str;
    //     vector<string> v;
    //     while (iss >> str)
    //         v.push_back(str);
    //     sort(v.begin(), v.end());
    //     unsigned long len = v.size();
    //     for (int i = 0; i < len - 1; i++)
    //     {
    //         cout << v[i] << " ";
    //     }
    //     cout << v[len - 1] << endl;
    // }

    /* 
    多个测试用例，每个测试用例一行。
    每行通过空格隔开，有n个字符，n＜100
    转换成数字数组
     */

    // string input;
    // while (getline(cin, input))
    // {
    //     istringstream iss(input);
    //     string str;
    //     vector<int> v;
    //     while (iss >> str)
    //         v.push_back(atoi(str.c_str()));
    //     sort(v.begin(), v.end());
    //     unsigned long len = v.size();
    //     for (int i = 0; i < len - 1; i++)
    //     {
    //         cout << v[i] << " ";
    //     }
    //     cout << v[len - 1] << endl;
    // }

    /* 
    多个测试用例，每个测试用例一行。
    每行通过,隔开，有n个字符，n＜100
     */

    // string input;
    // while (getline(cin, input))
    // {
    //     istringstream iss(input);
    //     string str;
    //     vector<string> v;
    //     while (getline(iss, str, ','))
    //         v.push_back(str);
    //     sort(v.begin(), v.end());
    //     unsigned long len = v.size();
    //     for (int i = 0; i < len; i++)
    //     {
    //         if (i != 0)
    //             cout << ",";
    //         cout << v[i];
    //     }
    //     cout << endl;
    // }

    // 输入包括两个正整数a, b(1 <= a, b <= 10 ^ 9), 输入数据包括多组。
    // int a, b;
    // while (scanf("%d %d", &a, &b) != EOF)
    // {
    //     printf("%d\n", a + b);
    // }

    /* 输入第一行包括一个数据组数t(1 <= t <= 100)，接下来每行包括两个正整数a,b(1 <= a, b <= 10^9)

    输出a+b的结果 */
    // int t;
    // scanf("%d", &t);
    // while (t--)
    // {
    //     int a, b;
    //     scanf("%d %d", &a, &b);
    //     printf("%d\n", a + b);
    // }

    /* 输入包括两个正整数a,b(1 <= a, b <= 10^9),输入数据有多组, 如果输入为0 0则结束输入
    输出a+b的结果 */
    // int a, b;
    // while (scanf("%d %d", &a, &b) && a != 0 && b != 0)
    // {
    //     printf("%d\n", a + b);
    // }


    /* 
    输入数据包括多组。
    每组数据一行,每行的第一个整数为整数的个数n(1 <= n <= 100), n为0的时候结束输入。
    接下来n个正整数,即需要求和的每个正整数。

    每组数据输出求和的结果
     */
    // int num;
    // while (scanf("%d", &num) && num != 0)
    // {
    //     int sum = 0;
    //     int val;
    //     for (int i = 0; i < num; i++)
    //     {
    //         scanf("%d", &val);
    //         sum += val;
    //     }
    //     printf("sum is %d\n", sum);
    // }

    /* 
    输入的第一行包括一个正整数t(1 <= t <= 100), 表示数据组数。
    接下来t行, 每行一组数据。
    每行的第一个整数为整数的个数n(1 <= n <= 100)。
    接下来n个正整数, 即需要求和的每个正整数。

    每组数据输出求和的结果
     */

    // int groups, num, val;
    // scanf("%d", &groups);
    // while (groups--)
    // {
    //     scanf("%d", &num);
    //     int sum = 0;
    //     for (int i = 0; i < num; i++)
    //     {
    //         scanf("%d", &val);
    //         sum += val;
    //     }
    //     printf("%d\n", sum);
    // }

    /*
    输入数据有多组, 每行表示一组输入数据。
    每行的第一个整数为整数的个数n(1 <= n <= 100)。
    接下来n个正整数, 即需要求和的每个正整数。

    每组数据输出求和的结果 
     */
    // int num;
    // while (scanf("%d", &num) != EOF)
    // {
    //     int sum = 0;
    //     int val;
    //     for (int i = 0; i < num; i++)
    //     {
    //         scanf("%d", &val);
    //         sum += val;
    //     }
    //     printf("%d\n", sum);
    // }

    /* 
    输入数据有多组, 每行表示一组输入数据。
    每行不定有n个整数，空格隔开。(1 <= n <= 100)。
    每组数据输出求和的结果
     */
    // string input;
    // while (getline(cin, input))
    // {
    //     istringstream iss(input);
    //     int sum = 0, val;
    //     while (iss >> val)
    //         sum += val;
    //     cout << sum << endl;
    // }

    // 多组输入数据
    /* 
    while(cin>>a>>b){
    cout<<a << b<<endl;
    }
     */


    // 已知输入数据组数
    /* 
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        cout<<a<<b<<endl;
    }
     */

    // 只有一组数据
    /* 
    cin>>a>>b;
    cout<<a<<b<<endl;
     */

    return 0;
}
