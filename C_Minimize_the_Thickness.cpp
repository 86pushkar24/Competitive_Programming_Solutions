// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int binpow(int a,int b,int m){
    int ans = 1;
    while(b > 0){
        if(b&1){
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans+m)%m;
}
 
 
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        int ans=n;
        for(int len=0;len<n;len++){
            int reqs=0,currs=0;
            for(int i=0;i<=len;i++)reqs+=a[i];
            int it = len,cans=len+1,l=len+1,h=len+1;
            for(int i=len+1;i<n;i++){
                currs+=a[i];
                if(reqs==currs){
                    cans=max(cans,h-l+1);
                    currs=0;
                    l=i+1;
                    h=i+1;
                }
                else if(currs>reqs){
                    break;
                }
                else h++;
            }
            if(currs==0)ans=min(ans,cans);
            
        }
        cout<<ans<<"\n";
    }
    return 0;
}

