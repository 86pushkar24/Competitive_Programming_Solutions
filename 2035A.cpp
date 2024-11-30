#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m,r,c;cin>>n>>m>>r>>c;
        cout<<(n*m-((r-1)*m+c)+(m-1)*(n-r))<<endl;
    }
}