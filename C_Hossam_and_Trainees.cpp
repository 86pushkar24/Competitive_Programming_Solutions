#include <bits/stdc++.h>
using namespace std;
vector <int> primes;
void solve() {
    int n; cin >> n;
    unordered_set <int> vals;
    int arr[n];
    for(int i = 0;i<n;i++) cin >> arr[i];
    int can(1);
    for(int i = 0;i<n && can;i++) {
        int x = arr[i];
        for(int j : primes) {
            if(j * j > x) break;
            if(x % j == 0) {
                if(vals.count(j)) {
                    can = 0;
                    break;
                }
                vals.insert(j);
                while(x % j == 0) x /= j;
            }
        }
        if(x > 1) {
            if(vals.count(x)) can = 0;
            vals.insert(x);
        }
    }
    if(can) cout << "NO\n";
    else cout << "YES\n";
}

signed main() {
    int n = 1e9;
    int x = sqrt(n);
    x += 10;
    vector <int> mark(x , 1);
    for(int i = 2;i*i<x;i++){
        if(mark[i] == 0)
            continue;
        for(int j = i*i;j<x;j+=i) mark[j] = 0;
    }
    for(int i = 2;i<x;i++){
        if(mark[i]) primes.push_back(i); 
    }
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}
