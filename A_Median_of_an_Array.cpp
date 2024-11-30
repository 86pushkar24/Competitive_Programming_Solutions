#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int r;
        cin >> r;
        vector<long long> arr(r);
        
        for (int i = 0; i < r; i++) {
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end());
        int ans = 1;
        int med = 0;
        
        if (r % 2 == 0) {
            med = r / 2;
        } else {
            med = (r + 1) / 2;
        }
        
        for (int k = med - 1; k < r - 1; k++) {
            if (arr[k] == arr[k + 1]) {
                ans++;
            } else {
                break;
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


