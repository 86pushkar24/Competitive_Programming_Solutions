#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        vector<pair< ll, ll > > v(4);
        ll mxx = -1e9, mxy = -1e9, mnx = 1e9, mny = 1e9;
        for (ll i = 0; i < 4; i++) {
            cin >> v[i].first >> v[i].second;
            mxx = max(mxx, v[i].first);
            mxy = max(mxy, v[i].second);
            mnx = min(mnx, v[i].first);
            mny = min(mny, v[i].second);
        }
        ll dx = mxx - mnx;
        ll dy = mxy - mny;
        ll ans = dx * dy;
        cout << ans << endl;
    }

    return 0;
}
