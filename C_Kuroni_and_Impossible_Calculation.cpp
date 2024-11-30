// #include<bits/stdc++.h>
#include<stdcpp.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push() {
    int n, md;
    cin >> n >> md;
    int a[n];
    
    if (n > md) {
        cout << "0" << endl;
        return;
    }
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int sum = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            sum = (sum * abs(a[j] - a[i])) % md;
            if (sum == 0) {
                cout << "0" << endl;
                return;
            }
        }
    }
    
    cout << sum << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    // cin >> tc; 
    while (tc--) {
        push();
    }
}
