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
    int n;
    cin >> n;
    int eve = 0, odd = 0, oddkey, evenkey;
    for (int i = 1; i <= n; ++i)
    {
        int key;
        cin >> key;
        if (key & 1)
        {
            odd++;
            oddkey = i;
        }
        else
        {
            eve++;
            evenkey = i;
        }
        if ((eve == 1 && odd > 1) || (odd == 1 && eve > 1))
            break;
    }
    if (eve > 1)
        cout << oddkey;
    else
        cout << evenkey;
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
