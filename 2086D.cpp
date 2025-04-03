#include<bits/stdc++.h>
using namespace std;

#define int long long
const int mod=998244353;
const int maxn=2e6+5;

int power(int x,int y,int p){
    int ans=1;
    x%=p;
    while(y>0){
        if(y&1) ans=(ans*x)%p;
        y>>=1;
        x=(x*x)%p;
    }
    return ans;
}
int modInverse(int n,int p){
    return power(n,p-2,p);
}
int f[maxn],inv[maxn];
void pre(int n,int p){
    f[0]=1;
    for(int i=1;i<=n;i++) f[i]=(f[i-1]*i)%p;
    inv[n]=modInverse(f[n],p);
    for(int i=n-1;i>=0;i--) inv[i]=inv[i+1]*(i+1)%p;
}
void solve(){
    vector<int> v1(26,0);
    for(int i=0;i<26;i++) cin>>v1[i];
    int n=accumulate(v1.begin(),v1.end(),0ll);
    vector<int> v2;
    for(int i=0;i<26;i++) if(v1[i]>0) v2.push_back(v1[i]);
    int odd=(n+1)/2,even=n-odd;
    auto fn=[&](int l,int r){
        int len=r-l+1;
        vector<int> ans;
        for(int i=0;i<(1<<len);i++){
            int sum=0;
            for(int j=0;j<len;j++) if(i&(1<<j)) sum+=v2[l+j];
            ans.push_back(sum);
        }
        return ans;
    };
    int z=v2.size();
    if(z==1){
        cout<<(v2[0]==1?1:0)<<endl;
        return;
    }
    vector<int> left=fn(0,(z/2)-1);
    vector<int> right=fn((z/2),z-1);
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    int ans=0,mult=(f[odd]*f[even])%mod;
    for(int i:v2) mult=(mult*inv[i])%mod;
    for(int i:left){
        int l=lower_bound(right.begin(),right.end(),odd-i)-right.begin();
        int r=upper_bound(right.begin(),right.end(),odd-i)-right.begin();
        ans=(ans+((r-l)*mult)%mod)%mod;
    }

    cout<<ans<<endl;
}
signed main(){
    int t;
    cin>>t;
    pre(maxn-1,mod);
    while(t--) solve();
}
