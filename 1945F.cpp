#include<bits/stdc++.h>
#define int long long
int main(){
    int tc=1;
    std::cin>>tc;
    while(tc--){
        int n;
        std::cin>>n;
        std::vector<int>a(n),p(n),ord(n);
        std::multiset<std::pair<int, int>> st;
        for(int i=0;i<n;i+=1){
            std::cin>>a[i];
            ord[i]=i;
        }
        std::sort(ord.begin(),ord.end(),[&](int x,int y){
            return a[x]>a[y];
        });
        for(int i=0;i<n;i+=1){
            std::cin>>p[i];
            p[i]--;
        }
        std::pair<int,int> ans={0,0};
        for(int j=0,i=0;j<n;j+=1){
            int x=j-1;
            if(x>=0){
                x=p[x];
                std::pair<int,int> pr={a[x],x};
                if(st.count(pr))st.erase(pr);
                a[x]=0;
            }
            while(i<n&&st.size()<=j){
                if(a[ord[i]]!=0)st.insert({a[ord[i]],ord[i]});
                i+=1;
            }
            if(st.size()<=j)break;
            auto[mn,idx]=*st.begin();
            std::pair<int,int>can={mn*(j+1),-j-1};
            ans=std::max(ans,can);
        }
        auto[x,y]=ans;
        std::cout<<x<<" "<<-y<<'\n';
    }
}