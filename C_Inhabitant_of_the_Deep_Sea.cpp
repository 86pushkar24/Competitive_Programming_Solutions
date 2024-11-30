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

void push() {
    int x, y;cin >> x >> y;
    int b[x], s = 0;
    for(int i = 0; i < x; i++) {
        cin >> b[i];
        s += b[i];
    }
    if(y >= s) {
        cout << x << endl;
        return;
    }
    int i = 0, j = x - 1, ans = 0;
    while(y && (i < j)) {
        if(y >= (2 * min(b[i], b[j]))) {
            ans++;
            y -= (2*min(b[i], b[j]));
            if(b[i] < b[j]) {
                b[j] -= b[i];
                i++;
            } 
            else if(b[i] == b[j]) {
                i++;
                j--;
                ans++;
            } 
            else {
                b[i] -= b[j];
                j--;
            }
        }
        else if((y + 1) == (2 * min(b[i], b[j])) && b[i] <= b[j]) {
            ans++;
            break;
        }
        else {
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
    return 0;
}
