#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, m=1;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        m=(m*i)%MOD;
    }
    cout<<m;
    return 0;
}
