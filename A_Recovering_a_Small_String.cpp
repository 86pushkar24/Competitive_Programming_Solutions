// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


void clear()
{
    int n;
    cin >> n;
    string str;
    if (n <= 27)
    {
        str = 'a';
        str += 'a';
        n -= 3;
        str += ('a' + n);
        cout << str << endl;
    }
    else if (n >= 28 && n <= 53)
    {
        str = 'a';
        n -= 28;
        str += ('a' + n);
        str += 'z';
        cout << str << endl;
    }
    else
    {
        n -= 53;
        str += ('a' + n);
        str += 'z';
        str += 'z';
        cout << str << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        clear();
    }
}
