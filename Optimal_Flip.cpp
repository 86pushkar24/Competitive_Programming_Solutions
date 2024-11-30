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

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int res(0), eve(0), k(0), mxx(0);
    for (int i = n-1;i>=0;i--){
        if (arr[i]%2 == 0){
            res += (n-i);
            eve = (n-i);
            k = 0;
        }
        else{
            res += eve;
            k++;
            mxx = max(mxx,k);
        }
    }
    mxx++;
    int pre = (mxx/2)*(mxx-(mxx/2));
    cout << res+pre << endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
        solve();
    }
}
