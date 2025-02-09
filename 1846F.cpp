// Practice clean code - 2
#include <bits/stdc++.h>
int main(){
    auto ask=[&](int s,const std::vector<int>&v){
        std::cout<<'-';
        std::cout<<' '<<v.size();
        for(auto x:v)std::cout<<' '<<x+1;
        std::cout<<std::endl;
        std::vector<int>a(s-v.size());
        for(int i=0;i<s-v.size();i++)std::cin>>a[i];
        return a;
    };
    int tc;
    std::cin>>tc;
    while(tc--){
        int n;
        std::cin>>n;
        std::vector<int>a(n);
        std::array<int,10>c1{},c2{};
        for(int i=0;i<n;i++){
            std::cin>>a[i];
            c1[a[i]]+=1;
        }
        a=ask(n,std::vector<int>());
        for(int i=0;i<n;i++)c2[a[i]]+=1;
        int c=0;
        for(int i=1;i<=9;i++){
            if(c2[i]==c1[i]+1){
                c=i;
                break;
            }
        }
        if(c==0){
            a=ask(n,std::vector<int>());
            c2.fill(0);
            for(int i=0;i<n;i++)c2[a[i]]+=1;
            for(int i=1;i<=9;i++){
                if(c2[i]==c1[i]+1){
                    c=i;
                    break;
                }
            }
        }
        std::vector<int>del;
        for(int i=0;i<n;i++)if(a[i]!=c)del.push_back(i);
        a=ask(n,del);
        int ans=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=c){
                ans=i+1;
                break;
            }
        }
        if(ans==0){
            a=ask(a.size(),std::vector<int>());
            for(int i=0;i<a.size();i++){
                if(a[i]!=c){
                    ans=i+1;
                    break;
                }
            }
        }
        std::cout<<"! "<<ans<<std::endl;
    }
}