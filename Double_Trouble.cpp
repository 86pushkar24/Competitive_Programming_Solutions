// @prefix cpp
// @description

#include <stdcpp.h>
// #include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(v) v.begin(), v.end()
#define pb push_back
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n;
vector<int> a, p;
void push() {
    cin >> n;
    a.resize(n);
    p.resize(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> p[i];
    int t(0);
    int cnt(1);
    for (int i = 0; i < n; ++i) {
        if (i == n - 1) break;
        if (a[i] + p[i] >= a[i + 1]) {
        } 
        else cnt++;
    }
    if (cnt <= 2) t=(1);
    cnt=(1);
    for (int i = n - 1; i >= 0; --i) {
        if (i == 0) break;
        if (a[i] - p[i] <= a[i - 1]) {
        } 
        else cnt++;
    }
    if (cnt <= 2) t=(1);
    int leftreach = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] + p[i] >= a[i + 1]) {
            leftreach = i + 1;
        } else {
            break;
        }
    }
    int rightreach = n - 1;
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] - p[i] <= a[i - 1]) {
            rightreach = i - 1;
        } else {
            break;
        }
    }

    if (leftreach + 1 >= rightreach) {
        t=(1);
    }

    if (t) {
        cout << "YES" << endl;
        return;
    }

    for (int i = 1; i < n; ++i) {
        if (a[i] - p[i] <= a[i - 1]) {
            continue;
        } else {
            for (int j = i; j < n; ++j) {
                if (j == n - 1) t=(1);
                if (a[j] + p[j] >= a[j + 1]) {
                    continue;
                } else {
                    break;
                }
            }
            break;
        }
    }
    (t) ? cout << "YES" << endl : cout << "NO" << endl;
}

signed main() {
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
