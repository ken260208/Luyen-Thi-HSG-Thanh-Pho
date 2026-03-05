#include<bits/stdc++.h>
using namespace std;
vector<int>a({1 ,3 ,6 ,8 ,9});

int binarysearch (int x, int target)
{
    int left=0, right=x-1;
    while(left <=right)
    {
        int mid = left + (right-left)/2;
        if(a[mid] == target) return mid;
        else if (a[mid] > target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n=a.size(), target=6;
    cout<< binarysearch(n, target);
    return 0;
}
