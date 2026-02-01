#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int, int>>sever;
    for(int i=0; i<n ; ++i)
    {
        int start, finish, w;
        cin>> start >> finish >> w;
        sever.emplace_back(start, w);
        sever.emplace_back(finish+1, -w);
    }
    sort(sever.begin(), sever.end());
    long long curr=0;
    long long Max_Ram=0;
    for(int i=0;i<sever.size();++i)
    {
        curr+=sever[i].second;
        Max_Ram=max(curr, Max_Ram);
    }
    cout<<Max_Ram;
    return 0;
}
