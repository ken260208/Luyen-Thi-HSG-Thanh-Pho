#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie();
    int n;
    cin>>n;
    vector<pair<int, int>>slength;
    int cnt=0;
    for(int i=0; i<n; ++i)
    {
        int a,b;
        cin>>a>>b;
        slength.emplace_back(a, cnt);
        slength.emplace_back(b, cnt + 1);
        cnt+=2;
    }
    sort(slength.begin(), slength.end());
    bool flag=false;
    int sum=0;
    int start;
    for(int i=0; i<slength.size(); i+=2)
    {
        int temp=(slength[i+1].second - slength[i].second);
                 if( temp> 1 && flag==false)
        {
            start=i;
            flag=true;
        }
        else
        {
            if(temp==1) sum+=(slength[i+1].first - slength[i].first);
            if(flag)
            {
                sum+=(slength[i-1].first - slength[start].first);
                flag = false;
            }
            if(temp>1 && (slength[i].second - slength[i-1].second == 1))
            {

                int start=i;
                flag=true;
            }
        }
    }
    cout<<sum;
    return 0;
}
