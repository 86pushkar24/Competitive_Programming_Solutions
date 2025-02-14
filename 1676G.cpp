#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1);
        vector<int> hsh(n+1);
        int root=1;
        for(int i=2;i<=n;i++){
            cin>>v[i];
            hsh[v[i]]++;
        }
        vector<pair<int,int>> bw(n+1);
        string s;
        cin>>s;
        vector<int> leafs;
        for(int i=2;i<=n;i++){
            if(hsh[i]==0){
                leafs.push_back(i);
            }
        }
        vector<int> vis(n+1,0);
        for(int i=0;i<leafs.size();i++){
            int curr_leaf=leafs[i];
            int cb=0;
            int cw=0;
            if(s[curr_leaf-1]=='B'){
                bw[curr_leaf].first++;
                cb++;
            }
            else{
                bw[curr_leaf].second++;
                cw++;
            }
            vis[curr_leaf]=1;

            while(curr_leaf!=root){
                curr_leaf=v[curr_leaf];
                bw[curr_leaf].first+=cb;
                bw[curr_leaf].second+=cw;
                if(vis[curr_leaf]==0){
                    if(s[curr_leaf-1]=='B'){
                        bw[curr_leaf].first++;
                        cb++;
                    }
                    else{
                        bw[curr_leaf].second++;
                        cw++;
                    }
                    vis[curr_leaf]=1;
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(bw[i].first==bw[i].second){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
