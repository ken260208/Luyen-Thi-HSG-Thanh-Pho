#include<bits/stdc++.h>
using namespace std;
const long long N=1e18;
vector<int>a;

bool checkmid(long long mid, int target)
{
    long long sum = 0;
    for(int x : a)
    {
        sum+=mid/x;
        if(sum >= target)return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, t;
    cin>>n>>t;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    long long left=0, right=N;
    long long ans = -1;
    while(left<=right)
    {
        long long  mid = left + (right - left)/2;
        if(checkmid(mid, t))
        {
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout<< ans;
    return 0;
}
