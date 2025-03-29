#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int> temp;
    temp=v;
    sort(temp.begin(),temp.end());
    vector<int> ans;
    
    return 0;
}