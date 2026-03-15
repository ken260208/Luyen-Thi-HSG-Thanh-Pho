#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    string s_temp="";
    int cnt=0;
    for(char c : s )
    {
        if(c == 'a') cnt++;
        else s_temp += c;
    }
    cout<<cnt<<'\n'<<s_temp;
    return 0;
}
