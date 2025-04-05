#include<bits/stdc++.h>
using namespace std;

#define int long long

const int mod=998244353;
const int maxn=2e6+5;

int fac[maxn],invfac[maxn];
int power(int x,int y,int p){
    int res=1;
    x%=p;
    while(y>0){
        if(y&1)res=(res*x)%p;
        y>>=1;
        x=(x*x)%p;
    }
    return res;
}

int modInverse(int n,int p){
    return power(n,p-2,p);
}

void pre(int n,int p){
    fac[0]=1;
    for(int i=1;i<=n;i++)fac[i]=(fac[i-1]*i)%p;
    invfac[n]=modInverse(fac[n],p);
    for(int i=n-1;i>=0;i--)invfac[i]=invfac[i+1]*(i+1)%p;
}

void solve(){
    vector<int>v0(26,0);
    for(int i=0;i<26;i++)cin>>v0[i];
    int n=accumulate(v0.begin(),v0.end(),0int);
    vector<int>v1;
    for(int i=0;i<26;i++)if(v0[i]>0)v1.push_back(v0[i]);
    int odd=(n+1)/2,even=n-odd;
    int z=v1.size();
    vector<int>dp(odd+1,0);
    dp[0]=1;
    for(int i=0;i<z;i++){
        for(int w=odd;w>=0;w--){
            if(w+v1[i]<=odd)dp[w+v1[i]]=(dp[w+v1[i]]+dp[w])%mod;
        }
    }
    int ans=dp[odd];
    int mult=(fac[odd]*fac[even])%mod;
    for(int i:v1)mult=(mult*invfac[i])%mod;
    ans=(ans*mult)%mod;
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    pre(maxn-1,mod);
    while(t--)solve();
}