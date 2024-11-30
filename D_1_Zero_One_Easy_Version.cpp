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
    int n, x, y;
    cin >> n >> x >> y;
    string a, b;
    cin >> a >> b;
    vector<int> unequal;
    for(int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            unequal.push_back(i);
        }
    }
    int len = unequal.size();
    if (len % 2)
    {
        cout << -1 << "\n";
        return;
    }
    if (len == 0)
    {
        cout << 0 << "\n";
        return;
    }
    if (len >= 4)
    {
        cout << 1LL * (len / 2) * y << "\n";
        return;
    }
    else
    {
        int idx = -1;
        for(int i = 1; i < n; i++)
        {
            if (a[i - 1] != b[i - 1] and a[i] != b[i])
            {
                idx = i;
                break;
            }
        }
        if (idx != -1 and (idx > 2 or (n - idx) > 2) and (2LL * y) < x)
        {
            cout << 2LL * y << "\n";
            return;
        }
        if (idx != -1 and (idx >= 2 and (n - idx) >= 2) and (3LL * y) < x)
        {
            cout << 3LL * y << "\n";
            return;
        }
        if (idx != -1)
        {
            cout << x << "\n";
            return;
        }
    }
    cout << y << "\n";
    return;
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
