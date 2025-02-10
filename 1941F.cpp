// Practice clean code-4
#include"bits/stdc++.h"

int main(){
    int tc;
    std::cin>>tc;
    while(tc--){
        int n, m, k;
        std::cin>>n>>m>>k;
        std::vector<long long> a(n), b(m), c(k);
        for(auto &x : a)std::cin>>x;
        for(auto &x : b)std::cin>>x;
        for(auto &x : c)std::cin>>x;
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        long long mx1(0), mx2(0);
        for(int i(0); i+1<n; i++){
            long long d=a[i+1]-a[i];
            if(d>=mx1){
                mx2=mx1;
                mx1=d;
            }
            else if(d>mx2)mx2=d;
        }
        long long ans=mx1;
        for(int i(0); i+1<n; i++){
            long long d=a[i+1]-a[i];
            if(d==mx1){
                long long need=(a[i+1]+a[i])/2;
                for(auto x : b){
                    auto it=lower_bound(c.begin(), c.end(), need-x);
                    if(it!=c.end()){
                        long long val=*it+x;
                        if(val<=a[i+1])ans=std::min(ans, std::max({mx2,val-a[i],a[i+1]-val}));
                    }
                    if(it!=c.begin()){
                        long long val=*prev(it)+x;
                        if(val>=a[i])ans=std::min(ans, std::max({mx2,val-a[i],a[i+1]-val}));
                    }
                }
                break;
            }
        }
        std::cout<<ans<<'\n';
    }
}