#include"bits/stdc++.h"
int main(){
    int n;
    std::cin>>n;
    std::vector<long long>v(n);
    for(auto&w:v)std::cin>>w;
    long long ans=0;
    for(int i=0;i<n;i+=2){
        long long xx=0,cc=0;
        for(int j=i-1;j>=0;j--){
            if(j%2==0){
                cc+=v[j];
                if(cc>0){
                    xx++;
                    break;
                }
                else if(cc==0)xx++;
            }
            else cc-=v[j];
        }
        long long strt=v[i],cnt=0;
        for(int j=i+1;j<n;j++){
            if(j%2==1){
                if(cnt>v[j])cnt-=v[j];
                else{
                    long long left=v[j]-cnt;
                    cnt=0;
                    long long op=std::min(left,strt);
                    ans+=op;
                    strt-=op;
                    if(strt==0){
                        ans+=xx;
                        break;
                    }
                }
            }
            else cnt+=v[j];
        }
    }
    std::cout<<ans<<'\n';
    return 0;
}
