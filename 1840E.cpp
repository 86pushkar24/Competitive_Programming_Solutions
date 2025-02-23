#include<bits/stdc++.h>
int main(){
    int tc;
    std::cin>>tc;
    while(tc--){
        std::string s[2];
        std::cin>>s[0]>>s[1];
        int n=s[0].size();
        int cnt=0;
        for(int i=0;i<n;i++)cnt+=(s[0][i]!=s[1][i]);
        int t,q;
        std::cin>>t>>q;
        std::vector<std::vector<int>> vv(q+1);
        std::vector<int> k(n);
        for(int i=1;i<=q;i++){
            for(auto x:vv[i])if(--k[x]==0)cnt+=(s[0][x]!=s[1][x]);
            int op;
            std::cin>>op;
            if(op==1){
                int x;
                std::cin>>x;
                x--;
                if(++k[x]==1)cnt-=(s[0][x]!=s[1][x]);
                if(i+t<=q)vv[i+t].push_back(x);
            }
            else if(op==2){
                int x1,y1,x2,y2;
                std::cin>>x1>>y1>>x2>>y2;
                x1--,y1--,x2--,y2--;
                for(auto vv:{y1,y2})cnt-=(s[0][vv]!=s[1][vv]);
                std::swap(s[x1][y1],s[x2][y2]);
                for(auto vv:{y1,y2})cnt+=(s[0][vv]!=s[1][vv]);
            }
            else{
                if(cnt==0)std::cout<<"YES\n";
                else std::cout<<"NO\n";
            }
        }
    }
}
