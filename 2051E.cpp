/*                                          जय श्री राधे कृष्णा।                                                         */
// Pushkar Gupta's Solution Starts Here

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> v1(n), v2(n);
        for(int &x :v1)cin>>x;
        for(int &x :v2)cin>>x;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        set<int> st={1};
        st.insert(v1.begin(), v1.end());
        st.insert(v2.begin(), v2.end());
        int res = 0;
        for(int it : st){
            int s =n-(lower_bound(v2.begin(),v2.end(),it)-v2.begin());
            int pt =n-(lower_bound(v1.begin(),v1.end(),it)-v1.begin());
            if(s>0 && (s-pt)<=k)res=max(res,it*s);
        }
        cout<<res<<"\n";
    }
    return 0;
}


