#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=0;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            if(mp[0]>=3&&mp[2]>=2&&mp[1]>=1&&mp[3]>=1&&mp[5]>=1)
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}