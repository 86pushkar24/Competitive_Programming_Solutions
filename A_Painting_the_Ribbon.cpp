// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){   
    int n, m, k;
    cin >> n >> m >> k;
    int a = n / m;
    int b = n % m;
    int c;
    if (b == 0) {
        c = 0;
    } else {
        c = 1;
    }
    int d = a + c;
    if (n - d <= k) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;

}}


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
