#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int median = v[n/2];
    long long sum=0;
    for(int x : v)
    {
        sum+=abs(x-median);
    }
    cout<<sum;
    return 0;
}
