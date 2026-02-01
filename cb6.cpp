#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int , int>>invent;
    for(int i=0; i<n; ++i)
    {
        int start, finish;
        cin>>start>>finish;
        invent.emplace_back(start, 1);
        invent.emplace_back(finish, -1);
    }
    sort(invent.begin(), invent.end());
    int curr=0, Max=-1;;
    for(int i=0; i<invent.size(); ++i)
    {
        curr+=invent[i].second;
        Max=max(curr, Max);
    }
    cout<<Max;
    return 0;
}
