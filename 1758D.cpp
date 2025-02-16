#include<bits/stdc++.h>
int main(){
    int tc;
    std::cin>>tc;
    while(tc--){
        int n;
        std::cin>>n;
        if(n==2){
            std::cout<<"1 3\n";
            continue;
        }
        int ans[n+2];
        int sum=(n+1)*(n+1);
        for(int i=1;i<=n;i++){
            ans[i]=i;
            sum-=ans[i];
        }
        ans[n]+=2;
        sum-=2;
        int add=sum/n;
        int rem=sum%n;
        for(int i=1;i<=n;i++){
            ans[i]+=add;
        }
        for(int i=n-1;i>1&&rem>0;i--){
            ans[i]+=std::min(2,rem);
            rem-=std::min(2,rem);
        }
        int s=0;
        for(int i=1;i<=n;i++){
            std::cout<<ans[i]<<" ";
            s+=ans[i];
        }
        std::cout<<std::endl;
    }
}
