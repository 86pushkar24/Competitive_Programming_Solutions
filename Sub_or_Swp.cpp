#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

void clear() {
    int x, y;
        cin >> x >> y;
        int result = gcd(x, y);
        cout << result << endl;
}



signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        clear();
    }

    return 0;
}
