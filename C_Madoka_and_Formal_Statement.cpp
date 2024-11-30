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
    int n, flag = 0;
    cin >> n;
    vector<int> a(n), b(n);

    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    int index = 0;

    while (index < n && a[index] < b[index])
        index++;

    if (index == n)
        index--;

    for (int i = index; i >= 0; i--)
    {
        if (a[i] > b[i])
            flag = 1;
        else if (a[i] < b[i])
        {
            int previous = (i != n - 1 ? b[i + 1] : b[0]);
            if (b[i] - previous > 1)
                flag = 1;
        }
    }

    for (int i = n - 1; i >= index; i--)
    {

        if (a[i] > b[i])
            flag = 1;
        else if (a[i] < b[i])
        {
            int previous = (i != n - 1 ? b[i + 1] : b[0]);
            if (b[i] - previous > 1)
                flag = 1;
        }
    }

    cout << (flag ? "NO\n" : "YES\n");
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
