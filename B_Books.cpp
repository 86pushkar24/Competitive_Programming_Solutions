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
    int n, m;
    cin >> n >> m;
    vector<int> answer(n + 1);
    int max = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> answer[i + 1];
        answer[i + 1] += answer[i];
    }
    int s = 0;
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        while (i <= n && answer[i] - answer[s] <= m)
        {
            count = i - s;
            i++;
        }
        if (count > max)
            max = count;
        while (s <= i && answer[i] - answer[s] > m)
        {
            s++;
        }
        i--;
    }
    cout << max;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        push();
    }
}
