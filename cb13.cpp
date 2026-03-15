#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    cout<<s.length()<<'\n';
    for(int i=1; i<s.length() ; ++i)
    {
        int j=i;
        while( j > 0 && (s[j] < s[j-1]) )
        {
            swap(s[j], s[j-1]);
            j--;
        }
    }
    cout<<s;
    return 0;
}
