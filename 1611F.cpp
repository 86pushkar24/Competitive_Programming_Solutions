#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tc;
    std::cin>>tc;
    while(tc--){
        long long n, s;
        std::cin>>n>>s;
        vector<long long> a(n+1), sum(n+1, 0), sum2(n+1, 0);
        for(int i=1; i<=n; i++){
            std::cin>>a[i];
            sum[i]=sum[i-1]+a[i];
        }
        sum2[1]=sum[1];
        for(int i=2; i<=n; i++)sum2[i]=std::min(sum2[i-1], sum[i]);
        long long l=-1, r=-1, ans=-1;
        for(int i=1; i<=n; i++){
            if(s+a[i]>=0){
                long long l1=i, r1=n+1;
                while(l1+1<r1){
                    long long mid=(l1+r1)/2;
                    if(sum2[mid]<sum[i-1]-s)r1=mid;
                    else l1=mid;
                }
                if(r1-i>ans){
                    ans=r1-i;
                    l=i;
                    r=r1-1;
                }
            }
        }
        if(ans==-1)std::cout<<-1<<"\n";
        else std::cout<<l<<' '<<r<<"\n";
    }
    return 0;
}
