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
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    for (int i = 0; i < 6; ++i) {
        if (x.find(s) != string::npos) {
            cout << i << endl;
            return;
        }
        x += x;
    }
    cout << -1 << endl;
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
