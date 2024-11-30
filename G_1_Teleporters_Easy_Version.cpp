// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define input(v,SIZE) vector < int > v; for(int z = 0; z < SIZE ; z++){int x; cin >> x; v.push_back(x);}
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n ,c;
    cin >> n >> c;
    input(v,n);
    vector < int  > pre; 
    for(int i = 0; i < n;i++){
        v[i] = v[i]+i+1;
    }
    sort(all(v));
    pre.push_back(v[0]);
    for(int i = 1; i < n;i++){
        pre.push_back(pre[i-1]+v[i]);
    }
    // for(auto i : pre) cout<<i<<" ";
    auto x = upper_bound(pre.begin(),pre.end(),c);
    // cout<<(*x)<<endl;
    if(x==pre.end()) cout<<n<<endl;
    else cout<<x-pre.begin()<<endl;
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

