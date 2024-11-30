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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            x = max(x, (a[i] + a[i - 1] + 1) / 2);
        }
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = abs(a[i] - x);
        v[i] = a[i];
    }
    sort(v.begin(), v.end());

    if (v == a)
    {
        cout << x << endl;
    }
    else
        cout << -1 << endl;

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
