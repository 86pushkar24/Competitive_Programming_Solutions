// CC-17
#include<bits/stdc++.h>
int main(){
    int tc;
    std::cin>>tc;
    while(tc--){
        std::string s;
        std::cin>>s;
        int n;
        std::cin>>n;
        std::vector<int> b(n);
        for(int i=0; i<int(n); i++)std::cin>>b[i];
        std::vector<std::vector<int>> vv;
        while(true){
            std::vector<int> vi;
            for(int i=0; i<int(n); i++)if(b[i]==0)vi.push_back(i);
            if(vi.empty())break;
            vv.push_back(vi);
            for(int i=0; i<int(n); i++)if(b[i]==0)b[i]=INT_MAX;
            else for(int it : vi)b[i]-=abs(i-it);
        }
        std::map<char, int> cnts;
        for(int i=0; i<int(s.size()); i++)cnts[s[i]]++;
        auto j=cnts.rbegin();
        std::string t(n, '?');
        for(auto g : vv){
            while(j->second<g.size())j++;
            for(int it :g)t[it]=j->first;
            j++;
        }
        std::cout<<t<<"\n";
    }
}
