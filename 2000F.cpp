#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        multiset<array<int,3>> m;
        for(int i=0; i<n; i++){
            int x, y;
            cin>>x>>y;
            if(y<x)swap(x, y);
            m.insert({x, y, i});
        }
        map<int, int> freq;
        int res=0;
        while(!m.empty()&&k>0){
            auto j=*m.begin();
            m.erase(m.begin());
            res+=j[0];
            j[1]--;
            freq[j[2]]=j[0];
            if(j[1]<j[0])swap(j[1], j[0]);
            k--;
            if(j[0]==0)k--;
            else m.insert(j);
        }
        if(k<0){
            int mx=0;
            for(const auto&[key, val]:freq)mx=max(mx, val);
            res-=mx;
        }
        if(k>0)cout<<"-1\n";
        else cout<<res<<"\n";
    }
    return 0;
}
