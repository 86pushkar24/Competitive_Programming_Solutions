#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int b[n];
        for(int i=0;i<n;i++)cin>>b[i];
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)v.push_back({b[i],a[i]});
        sort(v.begin(),v.end());
        int maxs[n];
        int sums=0;
        for(int i=0;i<n;i++){
            maxs[i]=sums;
            if(v[i].first-v[i].second>0)sums+=(v[i].first-v[i].second);
        }
        multiset<int>ss;
        int kk=0;
        int req[n];
        for(int i=n-1;i>=0;i--){
            if(ss.size()<k){
                ss.insert(v[i].second);
                kk+=v[i].second;
                req[i]=kk;
                continue;
            }
            if(ss.empty()){
                req[i]=0;
                continue;
            }
            int x=*(ss.rbegin());
            if(v[i].second<x){
                ss.erase(ss.find(x));
                kk-=x;
                kk+=v[i].second;
                ss.insert(v[i].second);
            }
            req[i]=kk;
        }
        int ans=0;
        if(k==0)ans=max(ans,sums);
        for(int i=0;i<n-k+1;i++)ans=max(ans,maxs[i]-req[i]);
        cout<<ans<<"\n";
    }
}
