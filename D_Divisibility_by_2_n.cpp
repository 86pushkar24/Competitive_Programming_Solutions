// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n, init(0), mov(0);
    cin >> n;
    vector<int> p;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        while (a[i] % 2 == 0)
        {
            init++;
            a[i] /= 2;
        }
        int x(0), temp(i+1);
        while (temp % 2 == 0)
        {
            x++;
            temp /= 2;
        }
        p.push_back(x);
    }
    sort(p.begin(), p.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (init >= n)
            break;
        mov++;
        init += p[i];
    }

    cout << (init >= n ? mov : -1) << "\n";
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
