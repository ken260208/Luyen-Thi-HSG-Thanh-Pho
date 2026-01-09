#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n; ++i) cin>>a[i];
    long long sum=0, Max=-1e18;
    for(int x : a)
    {
        sum+=x;
        Max=max(sum, Max);
        if(sum<0) sum=0;
    }
    cout<<Max;
    return 0;
}
