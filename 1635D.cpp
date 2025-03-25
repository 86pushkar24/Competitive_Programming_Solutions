#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
signed main(){
    int n,p;
    cin>>n>>p;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    set<int> w;
    for(int i=0;i<n;i++)w.insert(v[i]);
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int x=v[i];
        while(x!=0){
            if(x%2)x=(x-1)/2;
            else if(x%4==0)x=x/4;
            else break;
            if(binary_search(v.begin(),v.end(),x)){
                w.erase(v[i]);
                break;
            }
        }
    }
    v.clear();
    for(int g:w)v.push_back(g);
    n=v.size();
    vector<int> dp(p+1);
    int j=0,sum=0;
    for(int i=1;i<=p;i++){
        while(j!=n&&v[j]<(1LL<<i))j++,dp[i]++;
        dp[i]=(dp[i]+dp[i-1])%mod;
        if(i-1)dp[i]=(dp[i]+dp[i-2])%mod;
    }
    for(int i=1;i<=p;i++)sum=(sum+dp[i])%mod;
    cout<<sum<<endl;
}
