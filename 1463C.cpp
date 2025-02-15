#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> t(n),x(n);
        for(int i=0; i<n;i++)cin>>t[i]>>x[i];
        t.push_back(1e12);
        int ans(0),cur(0),mov_left(0),dir(0);
        for(int i=0; i<n; i++){
            if(mov_left==0){
                mov_left=abs(x[i]-cur);
                dir=((x[i]>cur)?1:-1);
            }
            int l=t[i],r=t[i+1],len=abs(t[i+1]-t[i]);
            int lmov=cur;
            if(len>=mov_left){
                cur+=mov_left*dir;
                mov_left=0;
            }
            else{
                cur+=len*dir;
                mov_left-=len;
            }
            int rmov=cur;
            if(lmov>rmov)swap(lmov, rmov);
            if(lmov<=x[i]&&rmov>=x[i])ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
