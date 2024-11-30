// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1 and i == 0)
        {
            cout << "Bob\n";
            return;
        }
    }
    ll mn = *min_element(all(v));
    if (v[0] == mn)
    {
        cout << "Bob\n";
        return;
    }
    cout << "Alice\n";
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
