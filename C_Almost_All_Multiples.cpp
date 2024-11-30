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

void push()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n + 1);

    for (int i = 0; i <= n; i++)
        a[i] = i;

    swap(a[1], a[n]);
    if (x != n)
        swap(a[1], a[x]);

    if (n % x != 0)
        cout << -1 << endl;
    else
    {
        vector<int> factors;

        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                factors.push_back(i);
                if (n / i != i && i != 1)
                    factors.push_back(n / i);
            }
        }

        sort(factors.begin(), factors.end());

        int index = x;

        for (auto &i : factors)
        {
            if (i % index == 0 && i > index)
            {
                swap(a[i], a[index]);
                index = i;
            }
        }

        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
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
