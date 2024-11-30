// @prefix cpp
// @description

#include <stdcpp.h>
// #include <bits/stdc++.h>
using namespace std;

#define endl '\n'
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    long long ans = 0;
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int cnt0 = 0, cnt1 = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == '0') cnt0++; 
        else cnt1++;
        int diff = cnt0 - cnt1;
        if (mpp.find(diff) == mpp.end()) mpp[diff] = 1;
        else {
            ans += mpp[diff];
            mpp[diff]++;
        }
    }
    ans += static_cast<long long>(n)*(n+1)/2;
    cout << ans << endl;
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
