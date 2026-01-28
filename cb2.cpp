#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin>>n;
    vector<int>a;
    for(int i=0; i<n ; ++i)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        bool flag = binary_search(a.begin(), a.end(), x);
        if(flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
