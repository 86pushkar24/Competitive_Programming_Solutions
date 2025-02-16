#include<bits/stdc++.h>
int main(){
    int tc;
    std::cin>>tc;
    while(tc--){
        long long n;
        std::cin>>n;
        if(n==2){
            std::cout<<"1 3\n";
            continue;
        }
        long long ans[n+2];
        long long sum=(n+1)*(n+1);
        for(int i=1;i<=n;i++){
            ans[i]=i;
            sum-=ans[i];
        }
        ans[n]+=2;
        sum-=2;
        long long add=sum/n;
        long long rem=sum%n;
        for(int i=1;i<=n;i++){
            ans[i]+=add;
        }
        for(int i=n-1;i>1&&rem>0;i--){
            ans[i]+=std::min(2LL,rem);
            rem-=std::min(2LL,rem);
        }
        long long s=0;
        for(int i=1;i<=n;i++){
            std::cout<<ans[i]<<" ";
            s+=ans[i];
        }
        std::cout<<std::endl;
    }
}
