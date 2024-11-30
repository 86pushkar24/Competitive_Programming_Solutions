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

void push(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int ans = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1)  ans += n;
     else {
            for (int ind = 0; ind < n; ind++) {
                int nex = pow(arr[i], ind + 1);
                if (nex > 1e12) break;
                else if (nex <= arr[ind]) ans++;
            }
        }
    }

    cout << ans << endl;
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

