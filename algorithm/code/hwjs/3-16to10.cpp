
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     while (cin >> hex >> a)
//         cout << a << endl;
//     return 0;
// }

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string s;
    int sum = 0, count = 0;
    while (cin >> s)
    {
        count = s.size() - 1;
        sum = 0;
        for (int i = count; i >= 2; --i)
            sum += (s[i] > '9' ? s[i] - 'A' + 10 : s[i] - '0') * pow(16, count - i);
        cout << sum << endl;
    }
    return 0;
}