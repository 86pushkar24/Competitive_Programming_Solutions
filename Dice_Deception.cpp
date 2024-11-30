// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push() {
    int x, y, ans = 0;
    cin >> x >> y;
    int b[x];
    for (int i = 0; i < x; i++) cin >> b[i];
    sort(b, b + x);
    for (int i = 0; i < x; i++) {
        if (i + 1 <= y) {
            if (b[i] > 7 - b[i]) ans += b[i]; 
            else ans += 7 - b[i];
        } 
        else  ans += b[i];
    }
    cout << ans << endl;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--) {
        push();
    }
}
