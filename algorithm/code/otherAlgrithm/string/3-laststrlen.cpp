#include<bits/stdc++.h>
using namespace std;


int main(){

    string strs("");
    getline(cin, strs);
    vector<string> vstr;
    char *ptr = strtok((char *)strs.c_str(), " ");
    while (ptr != NULL)
    {
        vstr.push_back(std::string(ptr));
        ptr = strtok(NULL, " ");
    }
    cout<<vstr[vstr.size()-1].size();

    for(auto value:vstr)
    {
        cout<<value<<endl;
    }

    return 0;
}
