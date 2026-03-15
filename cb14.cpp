#include<bits/stdc++.h>
using namespace std;
int a[256];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    cout<<s.length()<<'\n';
    for( char c : s)
    {
        a[(unsigned char)c]++;
    }
    for(int i=0; i<256 ; ++i)
    {
        while(a[i]>0)
        {
            cout<<((unsigned char)i);
            a[i]--;
        }
    }
    return 0;
}
