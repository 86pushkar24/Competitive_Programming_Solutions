//Practice clean code-3
#include<bits/stdc++.h>

long long INF=1e18,P=1e12+1,Q=1e12;

void push(){
    std::string s;
    std::cin>>s;
    s="@" + s;
    long long n=s.size()-1;
    std::vector<long long> l(n+1,0),r(n+2,0);
    for(long long i=1;i<=n;i++) l[i]=l[i-1]+(s[i]=='1')*P;
    for(long long i=n;i>=1;i--) r[i]=r[i+1]+(s[i]=='0')*P;
    long long ans=INF;
    for(long long i=1;i<=n+1;i++) ans=std::min(ans,l[i-1]+r[i]);
    for(long long i=1;i<n-1;i++) ans=std::min(ans,l[i-1]+r[i+2]+Q);
    std::cout<<ans<<std::endl;
}

int main(){
    long long t;
    std::cin>>t;
    while(t--) push();
    return 0;
}
