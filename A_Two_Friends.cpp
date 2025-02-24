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

void push()
{
    int n;
    cin >> n;
    int a[n], flag(0);
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mpp[a[i]] = i + 1;
        if (mpp[i + 1] == a[i]) flag = 1;
    }
    if (flag) cout << 2 << endl;
    else cout << 3 << endl;
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
