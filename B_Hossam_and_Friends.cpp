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
    int n, m, answer = 0;
    cin >> n >> m;

    vector<int> forward(n + 1, n);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        if (x > y)
            swap(x, y);

        forward[x] = min(forward[x], y - 1);
    }

    for (int i = n - 1; i >= 1; i--)
        forward[i] = min(forward[i], forward[i + 1]);

    for (int i = 1; i <= n; i++)
    {
        answer += (forward[i] - i + 1);
    }

    cout << answer << endl;
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
