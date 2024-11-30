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
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        if (i == 0 && n[i] == '9')
            continue;
        else
        {
            n[i] = (n[i] >= '5' ? '0' + '9' - n[i] : n[i]);
        }
    }
    cout << n << endl;
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
