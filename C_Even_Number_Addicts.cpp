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

void push(){
    int n;
    cin >> n;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x & 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    bool sol = true;
    if (n % 2 == 0)
    {
        if (odd % 2 == 0)
        {
            if ((odd / 2) % 2 == 1)
            {
                sol = false;
            }
        }
    }
    else
    {
        if (odd % 2 == 0)
        {
            if ((odd / 2) % 2 == 1)
            {
                sol = false;
            }
        }
        else if (((odd - 1) / 2) % 2 == 0)
        {
            sol = false;
        }
    }
    if (n == 1 and odd == 1)
    {
        sol = false;
    }
    cout << (sol ? "Alice" : "Bob") << endl;
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
