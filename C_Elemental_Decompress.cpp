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

    int n, notPossible = 0;
    cin >> n;

    vector<int> a(n), p(n), q(n);

    set<int> P, Q;

    for (int i = 1; i <= n; i++)
    {
        P.insert(i);
        Q.insert(i);
    }

    for (auto &i : a)
        cin >> i;

    for (int i = 0; i < n; i++)
    {
        if (P.find(a[i]) != P.end())
        {
            P.erase(a[i]);
            p[i] = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i] == 0)
        {
            auto f = P.upper_bound(a[i]);
            if (f == P.begin())
                notPossible = 1;
            else
            {
                f--;
                p[i] = *f;
                P.erase(f);
            }

            if (Q.find(a[i]) != Q.end())
            {
                q[i] = a[i];
                Q.erase(a[i]);
            }
            else
                notPossible = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (q[i] == 0)
        {
            auto f = Q.upper_bound(a[i]);
            if (f == Q.begin())
                notPossible = 1;
            else
            {
                f--;
                q[i] = *f;
                Q.erase(f);
            }
        }
    }

    if (notPossible)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (auto i : p)
            cout << i << " ";
        cout << endl;
        for (auto i : q)
            cout << i << " ";
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
