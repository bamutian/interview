
#include<bits/stdc++.h>
using namespace std;

// leetcode 1002
char findTheDifference(string s, string t)
{
    char ans = ' ';
    int lens = s.size();
    int lent = lens + 1;
    for (int i = 0; i < s.size(); i++)
    {
        ans = ans ^ s[i];
        ans = ans ^ t[i];
    }
    return ans ^ t[lent - 1] - 32;
}


int main(){

    string strs("");
    getline(cin, strs);
    vector<string> vstr;
    char *ptr = strtok((char *)strs.c_str(), ",");
    while (ptr != NULL)
    {
        vstr.push_back(std::string(ptr));
        ptr = strtok(NULL, " ");
    }
    cout<<findTheDifference(vstr[0], vstr[1])<<endl;

    return 0;
}
