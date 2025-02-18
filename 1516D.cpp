// CC - 18
#include<bits/stdc++.h>
signed main(){
    int n,q,R=17;
    std::cin>>n>>q;
    std::vector<std::vector<int>> p(n,std::vector<int>(R,n));
    std::vector<int> v(n);
    for(int i=0;i<n;i++)std::cin>>v[i];
    int j=0;
    std::vector<std::set<int>> dvs(n);
    std::map<int,int> dv;
    for(int i=0;i<n;i++){
        int j=2;
        while(j*j<=v[i]){
            while(v[i]%j==0)dvs[i].insert(j),v[i]/=j;
            j++;
        }
        if(v[i]>1)dvs[i].insert(v[i]);
    }
    for(int i=0;i<n;i++){
        for(auto&k:dvs[i]){
            while(dv[k]){
                for(auto&z:dvs[j])
                    dv[z]--;
                p[j++][0]=i;
            }
            dv[k]++;
        }
    }
    for(int j=1;j<R;j++)for(int i=0;i<n;i++)if(p[i][j-1]!=n)p[i][j]=p[p[i][j-1]][j-1];
    while(q--){
        int l,r;
        std::cin>>l>>r;
        l--,r--;
        int ans=1;
        for(int i=R-1;i>=0;i--)if(p[l][i]<=r)l=p[l][i],ans+=(1LL<<i);
        std::cout<<ans<<'\n';
    }
    return 0;
}
