#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
const int MAXN=100010;
vector<long long> fact(MAXN),invFact(MAXN);
long long modExp(long long base,long long exp,long long mod){
    long long res=1;
    while(exp>0){
        if(exp&1)res=(res*base)%mod;
        base=(base*base)%mod;
        exp>>=1;
    }
    return res;
}
void pre(int n){
    fact[0]=1;
    for(int i=1;i<=n;i++){
        fact[i]=(fact[i-1]*i)%MOD;
    }
    invFact[n]=modExp(fact[n],MOD-2,MOD);
    for(int i=n-1;i>=0;i--){
        invFact[i]=(invFact[i+1]*(i+1))%MOD;
    }
}

long long nCr(int n,int r){
    if(r<0||r>n)
        return 0;
    return (((fact[n]*invFact[r])%MOD)*invFact[n-r])%MOD;
}

void solve(){
    int n;
    cin>>n;
    vector<int> vc(n+1);
    for(int i=1;i<=n;i++)cin>>vc[i];
    long long ans=1;
    int crr=1;
    int cnt=0;
    int usd=0;
    for(int i=1;i<=n;i++){
        if(vc[i]!=crr){
            cnt++;
            int ncnt=vc[i]-crr-1;
            int avl=(i-1)-(cnt-1)-usd;
            long long k=nCr(avl,ncnt);
            ans=(ans*k)%MOD;
            usd+=ncnt;
            crr=vc[i];
        }
    }
    int tot=n-cnt;
    ans=(ans*fact[tot])%MOD;
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    pre(MAXN-1);
    while(t--){
        solve();
    }
    return 0;
}
