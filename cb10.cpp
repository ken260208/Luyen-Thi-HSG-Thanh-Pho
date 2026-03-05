#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, t;
    cin>> n >>t;
    vector<int>time;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        time.push_back(x);
    }
    sort(time.begin(), time.end());

}
