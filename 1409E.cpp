// Clean Code - 16
#include<bits/stdc++.h>
int main(){
    int t;
    std::cin>>t;
    while(t--){
        long long n,k;
        std::cin>>n>>k;
        long long x[n],y[n];
        for(int i=0;i<n;i++)std::cin>>x[i];
        for(int i=0;i<n;i++)std::cin>>y[i];
        std::sort(x,x+n);
        long long l[n],r[n];
        for(int i=0;i<n;i++){
            int lb=std::lower_bound(x,x+n,x[i]-k)-x;
            l[i]=i-lb+1;
        }
        for(int i=0;i<n;i++){
            int ub=std::upper_bound(x,x+n,x[i]+k)-x;
            r[i]=ub-i;
        }
        for(int i=1;i<=n-1;i++)l[i]=std::max(l[i],l[i-1]);
        for(int i=n-1-1;i>=0;i--)r[i]=std::max(r[i],r[i+1]);
        long long ans=1;
        for(int i=1;i<=n-1;i++)ans=std::max(ans,l[i-1]+r[i]);
        std::cout<<ans<<"\n";
    }
    return 0;
}