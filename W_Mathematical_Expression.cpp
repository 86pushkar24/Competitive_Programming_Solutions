// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear()
{
    int x, y, z;
    char ch1, ch2;
    cin >> x >> ch1 >> y >> ch2 >> z;
    int sum = x + y;
    int diff = x - y;
    int mul = x * y;
    switch (ch1)
    {
    case '+':
        if (sum == z)
        {
            cout << "Yes";
        }
        else
        {
            cout << sum;
        }

        break;
    case '-':
        if (diff == z)
        {
            cout << "Yes";
        }
        else
        {
            cout << diff;
        }

        break;
    case '*':
        if (mul == z)
        {
            cout << "Yes";
        }
        else
        {
            cout << mul;
        }

        break;
    default:
        break;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc; cin >> tc; while (tc--){
    clear();
    // }
}
