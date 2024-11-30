// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().cnt());
using namespace std;

#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
    }
    if (cnt == 4)
    {
        cout << "441" << endl;
    }
    else if (cnt == 3)
    {
        cout << "231" << endl;
    }
    else if (cnt == 2)
    {
        if ((s[0] == '1' && s[1] == '1') || (s[2] == '1' && s[3] == '1'))
        {
            cout << "21" << endl;
        }
        else
        {
            cout << "121" << endl;
        }
    }
    else if (cnt == 1)
    {
        cout << "11" << endl;
    }
    else
    {
        cout << "1" << endl;
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
    cerr << "Time measured: " << elapsed.cnt() * 1e-9 << " seconds." << endl;
}
