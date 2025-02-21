#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        if(n==1){
            cout<<(a[0]<=k-1?k:k-1)<<"\n";
            continue;
        }
        if(count(a.begin(),a.end(),0)==n){
            cout<<k<<"\n";
            continue;
        }
        int g=a[0];
        for(int i=1;i<n;i++)g=__gcd(g,a[i]);
        if(g==1)cout<<n-1+k<<"\n";
        else{
            int prv=0,ans=1;
            for(int i=1;i<n;i++){
                if(g-1>=k){
                    ans+=k-1;
                    k=0;
                    break;
                }
                k-=g-1;
                ans=i*g+1;
            }
            if(k)ans+=k-1;
            cout<<ans<<"\n";
        }
    }
}