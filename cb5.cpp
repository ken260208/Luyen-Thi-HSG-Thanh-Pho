#include<bits/stdc++.h>
using namespace std;

void compair(int x, int y)
{
    if(x < y) cout<<x<<" "<<y;
    else cout<<y<<" "<<x;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long x;
    cin>>n>>x;
    vector< pair<int, int> >p;
    for(int i=1; i<=n ; ++i)
    {
        int x;
        cin>>x;
        p.emplace_back(x, i);
    }
    sort(p.begin(), p.end());
    int L=0, R=n-1;
    while(L!=R)
    {
        long long sum = (long long)p[L].first + p[R].first;
        if(sum==x)
        {
            compair(p[L].second, p[R].second);
            return 0;
        }
        if(sum>x) R--;
        else L++;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
