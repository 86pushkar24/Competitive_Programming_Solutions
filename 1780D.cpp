#include"bits/stdc++.h"

int ask(int x){
    std::cout<<"- "<<x<<std::endl;
    int t;
    std::cin>>t;
    return t;
}
int main(){
    int tc;
    std::cin>>tc;
    while(tc--){
        int cnt;
        std::cin>>cnt;
        int last=1, ans=0;
        while(cnt){
            int t=ask(last);
            ans|=(1<<(t-cnt+1));
            last=(1<<(t-cnt+1));
            cnt--;
        }
        std::cout<<"! "<<ans<<std::endl;
    }
}