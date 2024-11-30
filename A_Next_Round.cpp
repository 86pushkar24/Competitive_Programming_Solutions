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
    int n, k, count = 0;
    cin >> n >> k;
    int score[n];
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (score[i] >= score[k - 1] && score[i] > 0)
        {
            count++;
        }
    }
    cout << count;
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
