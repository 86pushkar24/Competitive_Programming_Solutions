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

void push(){
    int n,q; cin >> n >> q;
    int mini = 101;
    for(int i = 1; i<=n; i++){
        int x; cin >> x;
        mini = min(mini,x);
    }
    while(q--){
        int x; cin >> x;
        cout << min(x,mini-1) << " ";
    }
    cout << endl;
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

