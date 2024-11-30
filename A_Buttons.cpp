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
    int a, b, c;
    cin >> a >> b >> c;
    int total = a;
    if (c % 2 != 0)
    {
        total += c / 2;
        total++;
    }
    else
    {
        total += c / 2;
    }
    if (total > b + (c / 2))
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
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
