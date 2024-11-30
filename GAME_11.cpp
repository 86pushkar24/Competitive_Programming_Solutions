#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n, m;
    cin >> n >> m;
    vector<int> x(n), y(m);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < m; i++) cin >> y[i];
    if (n < 4 || m < 4 || n + m < 11) cout << -1 << endl;
    else {
        sort(x.rbegin(), x.rend());
        sort(y.rbegin(), y.rend());
        int res(0);
        for (int i = 0; i < 4; i++) {
            res += x[i] + y[i];
        }
        vector<int> z;
        for (int i = 4; i < n; i++) z.push_back(x[i]);
        for (int i = 4; i < m; i++) z.push_back(y[i]);
        sort(z.rbegin(), z.rend());
        for (int i = 0; i < 3; i++) res += z[i];
        cout << res << endl;
    }
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

