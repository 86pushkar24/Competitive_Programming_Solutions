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

void push() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    vector<int> srt = a;
    sort(all(srt));
    bool can = false;
    for (int i = 0; i < n; ++i) {
        bool match = true;
        for (int j = 0; j < n; ++j) {
            if (a[(i + j) % n] != srt[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            can = true;
            break;
        }
    }

    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
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


