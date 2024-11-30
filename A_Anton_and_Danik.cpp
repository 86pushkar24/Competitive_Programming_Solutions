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
    int n, a = 0, b = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else if (s[i] == 'D')
            b++;
    }
    if (a > b)
        cout << "Anton";
    else if (b > a)
        cout << "Danik";
    else
        cout << "Friendship";
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
