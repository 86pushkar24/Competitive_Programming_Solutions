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
    int n;
    string s;
    cin >> n >> s;
    for (int k = n; k > 0; --k) {
        vector<char> t(n), end(n + 1);
        for (int i = 0; i < n; ++i) {
            t[i] = s[i] - '0';
        }
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            cnt -= end[i];
            t[i] ^= (cnt & 1);
            if (t[i] == 0) {
                if (i + k <= n) {
                    ++end[i + k];
                    ++cnt;
                    t[i] = 1;
                } else {
                    break;
                }
            }
        }
        if (*min_element(all(t)) == 1) {
            cout << k << '\n';
            return;
        }
    }
    assert(false);
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

