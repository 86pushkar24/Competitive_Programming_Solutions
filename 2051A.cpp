/*जय श्री राधे कृष्णा।*/
// Pushkar Gupta's Solution Starts Here

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> v1(n),v2(n);
        for(int i=0;i<n;++i)cin>>v1[i];
        for(int i=0;i<n;++i)cin>>v2[i];
        int res(0);
        for(int i(0);i<n-1;++i)if(v1[i]>v2[i+1])res+=(v1[i]-v2[i+1]);
        res+=v1[n-1];
        cout<<res<<endl;
    }
    return 0;
}
