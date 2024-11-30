// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define forn(i, n) for (int i = 0; i < n; i++)
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
const int maxn = 2e5 + 13;
void push()
{
    int n;
    cin >> n;

    int a[n], cnt[maxn] = {0};
    forn(i, n) cin >> a[i];

    forn(i, n)
    {
        cnt[a[i]]++;
    }

    bool flag = false;
    for (int i = 0; i < maxn; i++)
    {
        if (!(cnt[i] >= 2))
        {
            if (cnt[i] == 1 && !flag)
            {
                flag = true;
                continue;
            }
            cout << i << "\n";
            return;
        }
    }
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
