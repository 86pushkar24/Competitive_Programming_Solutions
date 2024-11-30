// #include <stdcpp.h>
// #include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
 
const int N = 2e5 + 1;
 
int g(int x) {
    int res = 0;
    while(x) {
        res += x % 10;
        x /= 10;
    }
    return res;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    vector<int>f(N);
 
    for(int i = 1; i < N; i++) {
        f[i] = f[i - 1] + g(i);
    }
 
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        cout << f[n] << endl;
    }
}

