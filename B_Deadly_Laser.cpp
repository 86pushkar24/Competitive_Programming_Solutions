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

// void push()
// {
    
// }

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
    // push();
    int n , m;
    cin >> n >> m;
    int x , y;
    cin >> x >> y;
    int d; cin >> d;
    int lx = x - d , ux = x + d;
    int ly = y - d , uy = y + d;
    if((lx > 1 && uy < m) or (ux < n && ly > 1)) {
        cout << n + m - 2 << endl ;
        continue;
        }
    cout << -1 << endl ;
    }
}
