// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear() {
    
        int k;
        cin >> k;

        int curr = 1;  
        bool flag = true;

        for (int day = 1; day <= 7; day++) {
            if (k >= curr) {
                k -= curr;
                curr *= 2;
            } else {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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
