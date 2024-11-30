// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define ai(a, n)                      \
    for (int ele = 0; ele < n; ele++) \
        cin >> a[ele];

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
const int N=2e5+5;
int a[N];
void push()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 1;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] < 2LL * a[i])
            cnt++;
        else
            cnt = 1;
        if (cnt > k)
            ans++;
            j--;
            int val 
    }

    cout << ans << endl;
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
