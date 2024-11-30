// @prefix cpp
// @description

#include <stdcpp.h>
// #include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MX = 100100;

void push() {
    int n;
    cin >> n;
    vector<int> arr(MX);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.begin() + n);
    int idx2(0), idx(1);
    for (; idx < n; idx++) {
        if (arr[idx] % arr[0] != 0) {
            if (idx2) {
                if (arr[idx] % arr[idx2] != 0) {
                    break;
                }
            } 
            else idx2 = idx;
        }
    }
    if(idx >= n) cout << "Yes" << endl;
    else cout <<  "No" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        push();
    }

    return 0;
}
