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
    if (n < 10)
    {
        cout << n << endl;
    }
    else
    {
        int digits = 0;
        int x = n;
        while (x != 0)
        {
            digits++;
            x /= 10;
        }
        int total = 0;
        digits--;
        total += 9 * digits;
        total += n / pow(10, digits);
        cout << total << endl;
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
