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
     int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if (vec[i] == vec[i + 1]) {
                ans++;
                i++;
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

