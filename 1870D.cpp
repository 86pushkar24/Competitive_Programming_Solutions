#include<bits/stdc++.h>
// using namespace std;

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin>>n;
        std::map<int,int>mp;
        for(int i=1;i<=n;i++){
            int x;
            std::cin>>x;
            mp[x]=std::max(mp[x],i);
        }
        int k;
        std::cin>>k;
        std::vector<int> a(n+1,0);
        a[0]=1e9+7;
        int last=0;
        int last_val=0;
        for(auto i:mp){
            if(i.second>last){
                int dif=i.first-last_val;
                int c=std::min(a[last],k/dif);
                a[last]-=c;
                a[i.second]+=c;
                k-=dif*c;
                last=i.second;
                last_val=i.first;
                if(c==0)break;
            }
        }
        for(int i=n-1;i>=1;i--)a[i]+=a[i+1];
        for(int i=1;i<=n;i++)std::cout<<a[i]<<" ";
        std::cout<<std::endl;
    }
}