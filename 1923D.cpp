#include<bits/stdc++.h>
int main(){
    int tc=1;
    std::cin>>tc;
    auto solve=[&](){
        long long n;
        std::cin>>n;
        std::vector<long long>a(n+5),sm(n+4);
        for(long long i=1;i<=n;i+=1){
            std::cin>>a[i];
            sm[i]+=a[i];
            sm[i]+=sm[i-1];
        }
        auto giv=[&](long long l,long long r)->long long
        {
            return sm[r]-sm[l-1];
        };
        std::vector<long long>mnr(n+5,1e9),mnl(n+5,-1e9);
        for(long long i=n-3;i>=1;i--){
            if(a[i+2]!=a[i+1])mnr[i]=i+1;
            mnr[i]=std::min(mnr[i],mnr[i+1]);
        }
        for(long long i=3;i<=n;i+=1){
            if(a[i-2]!=a[i-1])mnl[i]=i-2;
            mnl[i]=std::max(mnl[i],mnl[i-1]);
        }
        std::vector<long long>ans(n+5,1e9);
        for(long long i=1;i<=n;i+=1){
            if(i-1>=1&&a[i-1]>a[i])ans[i]=1;
            if(i+1<=n&&a[i+1]>a[i])ans[i]=1;
            if(mnl[i]>=1){
                long long lo=1,hi=mnl[i]+1;
                while(hi-lo>1){
                    long long mid=lo+(hi-lo)/2;
                    if(giv(mid,i-1)>a[i])lo=mid;
                    else hi=mid;
                }
                if(giv(lo,i-1)>a[i])ans[i]=std::min(ans[i],i-lo);
            }
            if(mnr[i]<=n){
                long long lo=mnr[i]-1,hi=n;
                while(hi-lo>1){
                    long long mid=lo+(hi-lo)/2;
                    if(giv(i+1,mid)>a[i])hi=mid;
                    else lo=mid;
                }
                if(giv(i+1,hi)>a[i])ans[i]=std::min(ans[i],hi-i);
            }
        }
        for(long long i=1;i<=n;i+=1){
            if(ans[i]>=1e9)ans[i]=-1;
            std::cout<<ans[i]<<' ';
        }
        std::cout<<'\n';
    };
    for(int i=0;i<tc;i+=1)solve();
}