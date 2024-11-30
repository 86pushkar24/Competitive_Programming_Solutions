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

void push(){
    int y, z, s = 100, l = 0, m = 0, ans = 0;
    cin >> y >> z;
    for (int a = z, b = max(z - 1000, y), x = a; a >= b; a--, x = a, s = 100, l = 0)
    {
        while (x > 0)
            l = max(l, x % 10), s = min(s, x % 10), x /= 10;
        if (m < l - s)
            m = l - s, ans = a;
    }
    cout << max(ans, y) << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
    push();
    }
}

