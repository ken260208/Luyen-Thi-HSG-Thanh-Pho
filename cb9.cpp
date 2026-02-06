#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int, int>>invents;
    for(int i=0 ; i<n ; ++i)
    {
        int a,b;
        cin>>a>>b;
        invents.emplace_back(a, 1);
        invents.emplace_back(b, -1);
    }
    sort(invents.begin(), invents.end());
    int cnt=0;
    long long sum=0;
    for(int i=0; i<invents.size(); ++i)
    {
        if(i>0)
        {
            if(cnt>0)
            {
                sum+=(invents[i].first - invents[i-1].first);
            }
        }
        cnt+=invents[i].second;
    }
    cout<<sum;
}
