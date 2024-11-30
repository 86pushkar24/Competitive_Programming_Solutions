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
    int n, k;
    cin >> n >> k;
    if (n == 1) cout << k << endl;
    else
    {
        int f = 0;
        if (k + 1 == (1 << ((int)log2(k))))
        {
            cout << k << " ";
        }
        else
        {
            cout << (1 << (int)log2(k)) - 1 << " ";
            f = k - ((1 << (int)log2(k)) - 1);
        }
        for (int i = 0; i < (n - 1); i++)
        {
            cout << f << " ";
            f = 0;
        }
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
