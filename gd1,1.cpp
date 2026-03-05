#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;
int p[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>a(1);
    for(int i=1;i<=n;++i)
    {
        int x;
        cin>>x;
        a.push_back(x);
        p[i]=x+p[i-1];
    }
    if(p[n]%2!=0) cout<<0;
    else
    {
        int sum = p[n]/2;
        for(int i=1; i<=n ;++i)
        {
            if(p[i]== sum) cout<<i;
        }
    }
    return 0;
}
