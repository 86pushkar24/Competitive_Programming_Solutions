#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

using vi = vector<int>;
using vvi = vector<vector<int>>;

const int maxn = 4e5 + 5;
const int inf = 1e18;
const int mod = 1e9 + 7;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

template <typename K, typename V>
using fast_map = gp_hash_table<K, V, custom_hash>;
template <typename K>
using fast_set = gp_hash_table<K, null_type, custom_hash>;

void push() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>>  a(n, vi(m));
    vector<int>  v(n * m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            a[i][j]--;
            v[a[i][j]] = max(v[a[i][j]], 1LL);
            if (i > 0 && a[i - 1][j] == a[i][j])
                v[a[i][j]] = 2;
            if (j > 0 && a[i][j] == a[i][j - 1])
                v[a[i][j]] = 2;
        }
    }
    int b = 0, ans = 0;
    for (auto x : v) {
        ans += x;
        b = max(b, x);
    }
    cout << ans - b << "\n";
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    auto begin = chrono::high_resolution_clock::now();

    int tc;
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
        push();
    }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
