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

bool ans(const string &pwd)
{
    bool dgt = false;
    bool has = false;
    char ldgt = '0' - 1;
    char ltr = 'a' - 1;
    for (char ch : pwd)
    {
        if (isdigit(ch))
        {
            dgt = true;
            if (ch < ldgt)
            {
                return false;
            }
            ldgt = ch;
        }
        else if (isalpha(ch) && islower(ch))
        {
            has = true;
            if (ch < ltr)
                return false;
            ltr = ch;
        }
        else
            return false;

        if (has && dgt && isdigit(ch) && ltr != 'a' - 1)
            return false;
    }
    return true;
}

void push()
{
    int n;
    cin >> n;
    string pwd;
    cin >> pwd;
    if (ans(pwd))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
