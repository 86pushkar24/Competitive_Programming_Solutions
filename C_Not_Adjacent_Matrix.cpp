// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int len;
    cin >> len;
    int odd = 1;
    int even = 2;
    if (len % 2 == 0)
    {
        even = len * len / 2;
        even = even + 1;
    }
    else
    {
        even = len * len / 2;
        even = even + 2;
    }
    if (len == 1)
    {
        cout << 1 << "\n";
        return;
    }
    if (len == 2)
    {
        cout << -1 << "\n";
        return;
    }
    int num = 1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (num % 2 == 1)
            {
                cout << odd << " ";
                odd = odd + 1;
                num++;
                continue;
            }
            else
            {
                cout << even << " ";
                even = even + 1;
                num++;
                continue;
            }
        }
        cout << "\n";
    }
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
