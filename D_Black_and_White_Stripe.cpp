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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int b = 0, w = 0, m = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'B')
            b++;
        else
            w++;
    }
    m = w;
    for (int i = k; i < n; i++)
    {
        s[i] == 'B' ? b++ : w++;
        s[i - k] == 'B' ? b-- : w--;
        m = min(w, m);
    }
    cout << m << endl;
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
