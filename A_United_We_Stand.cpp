// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i = a; i<b; i++)
#define ll long long
#define all(v) v.begin(), v.end()
#define range(i, n) for (int i = 0; i < (n); i++)
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin >> n;
    vector<int> v(n);
    FOR(i, 0, n) { cin >> v[i]; }
    bool check = 0;
    FOR(i, 1, n)
    {
        if (v[i] != v[i - 1])
        {
            check = 1;
            break;
        }
    }
    if (check)
    {
        sort(v.begin(), v.end());
        int i = 0;
        while (v[i] != v.back())
        {
            i++;
        }
        cout << i << " " << n - i << "\n";
        FOR(j, 0, i)
        {
            cout << v[j] << " ";
        }
        cout << "\n";
        FOR(j, i, n)
        {
            cout << v[j] << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << -1 << "\n";
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
