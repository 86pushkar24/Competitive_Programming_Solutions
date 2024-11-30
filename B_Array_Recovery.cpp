// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define rep(i,a,b) for(int i=a;i<b;i++)

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
using vec = vector<int>;
void push(){
    int n;
    cin>>n;
    vec v(n),v1(n);
    rep(i,0,n)cin>>v[i];
    v1[0]=v[0];
    bool flag=true;
    rep(i,1,n){
        int a=v1[i-1]+v[i];
        int b=v1[i-1]-v[i];
        if(a>=0 and b>=0 and a!=b){
            flag=false;
            break;
        }
        else{
            
            v1[i]=max(a,b);
        }
          
    }
    if(flag){
        for(auto i:v1)cout<<i<<" ";
            cout<<endl;
    }
    else cout<<-1<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
    push();
    }
}

