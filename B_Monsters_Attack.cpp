// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

#define ll long long int
#define ul unsigned long long int
#define For for (ll i = 0; i < n; ++i)
using namespace std;

void push()
{
    int n, k, sum = 0, okay = 1;
    cin >> n >> k;

    vector<pair<int, int>> a(n);

    for (auto &i : a)
        cin >> i.second;
    for (auto &i : a)
    {
        cin >> i.first;
        i.first = abs(i.first);
    }

    sort(a.begin(), a.end());

    for (auto &i : a)
    {
        sum += i.second;
        int time = (sum + k - 1) / k;
        if (time > i.first)
            okay = 0;
    }

    cout << (okay ? "YES" : "NO") << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
}
