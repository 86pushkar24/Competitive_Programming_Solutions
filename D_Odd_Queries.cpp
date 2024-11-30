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
    int n , q;
    cin >> n >> q;
    vector <int> odd(n);
    int a;
    for(int i = 0;i<n;i++) {
        cin >> a;
        odd[i] = a % 2;
        if(i) odd[i] += odd[i - 1];
    }
    while(q--) {
        int l , r , k;
        cin >> l >> r >> k;
        l--;
        r--;
        int change = odd[r];
        if(l) change -= odd[l - 1];
        int total = odd[n - 1] - change;
        if(k % 2) total += (r - l + 1);
        if(total % 2) cout << "YES" << endl;
        else cout << "NO" << endl;
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

