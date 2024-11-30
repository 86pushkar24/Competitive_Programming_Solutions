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
    int a, b;
    cin >> a >> b;
    int already2 = 0, already5 = 0;
    int x = a;
    while (x % 2 == 0)
    {
        x /= 2;
        already2++;
    }
    while (x % 5 == 0)
    {
        x /= 5;
        already5++;
    }
    int c = 1;
    if (already2 > already5)
    {
        while (c * 5ll <= b && already2 > already5)
        {
            already5++;
            c *= 5ll;
        }
    }
    else if (already2 < already5)
    {
        while (c * 2ll <= b && already2 < already5)
        {
            already2++;
            c *= 2ll;
        }
    }
    while (c * 10ll <= b)
        c *= 10ll;
    int greatd = b / c;
    greatd *= c;
    cout << a * greatd << "\n";
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
