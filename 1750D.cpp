#include<bits/stdc++.h>
using namespace std;
const long long MOD=998244353;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int>pf;
        int x=a[0];
        for(int i=2;1LL*i*i<=x;i++){
            if(!(x%i)){
                while(!(x%i))x/=i;
                pf.push_back(i);
            }
        }
        if(x>1)pf.push_back(x);
        vector<int>pdt(1<<pf.size());
        for(int i=0;i<(1<<pf.size());i++){
            int prod=1;
            for(int j=0;j<pf.size();j++){
                if((i&(1<<j)))prod*=pf[j];
            }
            pdt[i]=prod;
        }
        long long ans=1;
        for(int i=1;i<n;i++){
            if(a[i-1]%a[i]){
                ans=0;
                break;
            }
            if(a[i-1]==a[i]){
                ans=(ans*(m/a[i]))%MOD;
                continue;
            }
            int k=0;
            for(int j=0;j<(1<<pf.size());j++){
                if(!(a[i-1]%(1LL*pdt[j]*a[i])))k+=(__builtin_popcount(j)%2?-m/(pdt[j]*a[i]):m/(pdt[j]*a[i]));
            }
            k%=MOD;
            ans=(ans*k)%MOD;
        }
        cout<<ans<<"\n";
    }
}
