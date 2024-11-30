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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = 0;
    int x = 1;
    int i = 0;
    while (i < n)
    {
        if (arr[i] == 0)
        {
            x = 1;
            while (arr[i] == arr[i + x] && i + x < n)
            {
                x++;
            }
            i += x;
            res = max(res, x);
        }
        else
        {
            i++;
        }
    }
    cout << res << endl;
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
