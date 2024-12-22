/*                                          जय श्री राधे कृष्णा।                                                         */
// Pushkar Gupta's Solution Starts Here

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>v1(n);
        int sm(0);
        for(int i(0);i<n;i++)cin>>v1[i],sm+=v1[i];
        int lft=sm-y, rgt=sm-x;
        sort(v1.begin(),v1.end());
        int res(0);
        for(int i(0);i<n;i++){
            int mnn=lft-v1[i] ,mxx=rgt-v1[i];
            int lft_idx=lower_bound(v1.begin()+i+1,v1.end(),mnn)-v1.begin();
            int rgt_idx=upper_bound(v1.begin()+i+1,v1.end(),mxx)-v1.begin()-1;
            if(lft_idx<=rgt_idx) res+=(rgt_idx-lft_idx+1);
        }
        cout<<res<<"\n";
    }
    return 0;
}
