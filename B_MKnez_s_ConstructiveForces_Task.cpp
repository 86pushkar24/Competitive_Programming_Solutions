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
    int n; cin >> n;
    if (n == 3) cout << "NO" << endl;
    else if (n & 1) {
        int used = (n + 1) / 2;
        cout << "YES" << endl;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i & 1) cout << n - 3 << " ";
            else cout << -(n - 1) << " ";
        } 
    cout << endl;
    }
    else {
        cout << "YES" << endl;
        for (int i = 1; i <= n; i++) {
            if (i & 1) cout << -1 << " ";
            else cout << 1 << " ";
        } 
    cout << endl;
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

