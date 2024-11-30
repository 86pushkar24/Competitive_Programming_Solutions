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
    int x; cin >> x;
    vector<int> a;
    while (x > 0)
    {
        if (x % 2 == 0) a.push_back(0);
        else
        {
            if ((x - 1) / 2 % 2 == 0)
            {
                a.push_back(1);
                x -= 1;
                x -= 1;
            }
            else
            {
                a.push_back(-1);
                x += 1;
            }
        }
        x /= 2;
    }
    cout << a.size() << '\n';
    for (int i = 0; i < int(a.size()); i++)
    {
        cout << a[i] << " \n"[i == int(a.size()) - 1];
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
