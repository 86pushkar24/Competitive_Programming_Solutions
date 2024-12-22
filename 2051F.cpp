/*                                          जय श्री राधे कृष्णा।                                                         */
// Pushkar Gupta's Solution Starts Here
#include<bits/stdc++.h>
using namespace std;
#define int long long

int fn(set<pair<int, int>>& st1) {
    int res(0);
    for(auto &it:st1)res+=(it.second-it.first+1);
    return res;
}

signed main() {
    int t;
    cin >> t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        vector<int> v1(q);
        for(int i(0);i<q;i++)cin>>v1[i];
        set<pair<int,int>> st1={{m,m}};
        for(int i(0);i<q;i++){
            int k=v1[i];
            set<pair<int,int>> st2;
            for(auto &it:st1){
                int a(it.first),b(it.second);
                if(a<=k-1){
                    st2.emplace(a,min(b,k-1));
                    st2.emplace(a+1,min(b+1,k));
                }
                if(k>=a && k<=b){
                    st2.emplace(1,1);
                    st2.emplace(n,n);
                }
                if(b>=k+1){
                    st2.emplace(max(a,k+1),b);
                    st2.emplace(max(a-1,k),b-1);
                }
            }
            set<pair<int,int>> fst;
            for(auto &it:st2)
                if (!fst.empty() && prev(fst.end())->second+1>=it.first) {
                    auto end=*prev(fst.end());
                    fst.erase(prev(fst.end()));
                    fst.emplace(end.first, max(end.second, it.second));
                }
                else fst.insert(it);
            st1.swap(fst);
            if(i+1<q) cout<<fn(st1)<<" ";
            else cout<<fn(st1)<<endl;
        }
    }
    return 0;
}

