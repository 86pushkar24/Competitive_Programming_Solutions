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

void solve() {
    int num;cin >> num;
    int count = 0,lsb = 0,current = 0,mini = LLONG_MAX;;
    for(int i = 31; i >= 0; i--) {
    if(num & (1LL << i)) {
        if(lsb == 0) lsb = i; 
        if(count == 0 || count == 2) count++;
        } else {if(count == 1) count = 2;}}
    if(count != 3) {cout << 0 << endl;
        return;}
    for(int i = lsb; i >= 0; i--) {
        current = current + pow(2, i);
        if(current < num) continue; 
        mini = min(mini, current - num);
    }
    cout << mini << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--) {
        solve();
    }

    return 0;
}
