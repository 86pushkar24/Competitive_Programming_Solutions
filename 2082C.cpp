#include"bits/stdc++.h"
using namespace std;
const int M=1e9+7,maxn=1e5;
int p2[maxn+1],ip2[maxn+1];
void pre(){
    p2[0]=ip2[0]=1;
    p2[1]=2;
    ip2[1]=5e8+4;  
    for(int i=2;i<=maxn;++i){
        p2[i]=1LL*p2[i-1]*p2[1]%M;
        ip2[i]=1LL*ip2[i-1]*ip2[1]%M;
    }
}
int main(){
    pre();
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        long long cnt=0,ans=0;
        for(int i=1;i<n;++i)cnt=(cnt+(s[i]-'0')*p2[n-i])%M;
        ans=(1LL*(n-1)*p2[n]%M+cnt)%M*ip2[n]%M;
        cout<<ans<<'\n';
    }
    return 0;
}
