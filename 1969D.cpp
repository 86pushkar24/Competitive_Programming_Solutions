#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        vector<pair<int,int>> c(n);
        for(int i=0;i<n;i++){
            c[i].first=b[i];
            c[i].second=a[i];
        }
        sort(c.rbegin(),c.rend());
        vector<int> sum(n,0);
        vector<int> t(n,0);
        multiset<int> s;
        int l=0;
        for(int i=0;i<n;i++){
            s.insert((-c[i].second));
            l+=(-c[i].second);
            if(s.size()>k){
            l-=*s.begin();
            s.extract(s.begin());
            }
            t[i]=l;
        }
        for(int i=n-1;i>=0;i--){
            if(c[i].first+(-c[i].second)>0)sum[i]=c[i].first+(-c[i].second);
            if(i!=n-1){
            sum[i]+=sum[i+1];
            t[i]+=sum[i+1];
            }
        }
        int ans=0;
        if(k==0)ans=max(ans,sum[0]);
        else for(int i=k-1;i<n;i++)ans=max(ans,t[i]);
        cout<<ans<<"\n";
    }
}
