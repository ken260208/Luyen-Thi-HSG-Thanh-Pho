#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin>>n;
    long long sum1=0, sum2=0;
    for(int i=1 ; i<=n ;++i) sum2+=i;
    for(int i=0 ; i<n-1 ;++i)
    {
        int x;
        cin>>x;
        sum1+=x;
    }
    cout<<sum2-sum1;
    return 0;
}
