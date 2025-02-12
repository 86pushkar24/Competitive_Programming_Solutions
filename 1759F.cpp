#include<bits/stdc++.h>
int p;
int find(std::set<int>&s,int val,int p){
    if(s.size()==p)return 0;
    int it=s.size()+1;
    int cur=(val-1+p)%p;
    for(int i=1;i<=it;i++){
        if(s.find(cur)==s.end())return cur;
        cur=(cur-1+p)%p;
    }
    return 1e9+10;
}
int main(){
    int tt;
    std::cin>>tt;
    while(tt--){
        int n;
        std::cin>>n>>p;
        std::set<int>s;
        std::vector<int>v;
        v.push_back(0);
        for(int i=0;i<n;i++){
            int x;
            std::cin>>x;
            s.insert(x);
            v.push_back(x);
        }
        if(s.size()==p){
            std::cout<<0<<'\n';
            continue;
        }
        int largest=find(s,v[n],p);
        if(largest>v[n]){
            std::cout<<(largest-v[n]+p)%p<<'\n';
            continue;
        }
        s.insert(largest);
        int second=find(s,v[n],p);
        if(second>v[n])second=0;
        int mini=1e18;
        if(v[n-1]==(largest-1+p)%p)mini=std::min(mini,(second-v[n]+p)%p);
        mini=std::min(mini,(largest-v[n]+p)%p);
        std::cout<<mini<<'\n';
    }
    return 0;
}