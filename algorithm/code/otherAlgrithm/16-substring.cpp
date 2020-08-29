#include<bits/stdc++.h>
using namespace std;

/* 


因此在某些明文的传输中会使用一种加密策略，小团如果需要传输一个字符串 S，
则他会为这个字符串添加一个头部字符串和一个尾部字符串。头部字符串满足至少包含一个 “MT” 子序列，且以 T 结尾。
尾部字符串需要满足至少包含一个 “MT” 子序列，且以 M 开头。例如 AAAMT 和 MAAAT 都是一个合法的头部字符串，
而 MTAAA 就不是合法的头部字符串。很显然这样的头尾字符串并不一定是唯一的，因此我们还有一个约束，就是 S 是满足头尾字符串合法的情况下的最长的字符串。
 */

int main(){
    
    int n; cin >> n;

    string s; cin >> s;

    int i = 0;

    while (s[i] != 'M' && i < n)i++;

    while (s[i] != 'T' && i < n)i++;

    int j = n - 1;

    while (s[j] != 'T' && j >= 0)j--;

    while (s[j] != 'M' && j >= 0)j--;

    

    string ans = s.substr(i + 1, j - i-1);

    cout << ans << endl;

    

    return 0;
}
