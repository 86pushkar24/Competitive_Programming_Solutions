#include<bits/stdc++.h>
void push(){
    long long n;
    std::cin>>n;
    std::vector<long long> ans(n);
    long long curr=n,k=0;
    while(k==0){
        std::vector<long long> query(n,curr);
        query[n-1]=1;
        std::cout<<"?";
        for(long long i=0;i<n;i++){
            std::cout<<" "<<query[i];
        }
        std::cout<<'\n';
        std::cout<<std::flush;
        std::cin>>k;
        if(k!=0){
            ans[n-1]=query[0];
            ans[k-1]=1;
            break;
        }
        curr--;
        if(curr==0){
            ans[n-1]=1;
            break;
        }
    }
    long long last=ans[n-1];
    long long now=2;
    while(now<=n){
        if(now==last){
            now++;
            continue;
        }
        std::vector<long long> query(n,n+1-now);
        query[n-1]=n+1-last;

        std::cout<<"?";
        for(long long i=0;i<n;i++){
            std::cout<<" "<<query[i];
        }
        std::cout<<'\n';
        std::cout<<std::flush;
        std::cin>>k;
        ans[k-1]=now;
        now++;
    }
    std::cout<<"!";
    for(auto ele:ans){
        std::cout<<" "<<ele;
    }
    std::cout<<'\n';
    std::cout<<std::flush;
}

signed main(){
    long long t=1;
    while(t--)push();
    return 0;
}
