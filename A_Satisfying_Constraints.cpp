#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int l = 0, u = 1e9;
        set<int> v;

        for (int j = 0; j < n; j++) {
            int op, val;
            cin >> op >> val;

            if (op == 1) {
                l = max(l, val);
            } else if (op == 2) {
                u = min(u, val);
            } else {
                v.insert(val);
            }
        }

        int ans = u - l;

        if (ans == 0) {
            cout << 0 + (v.count(u) > 0 ? 0 : 1) << endl;
            continue;
        } else if (ans < 0) {
            cout << 0 << endl;
            continue;
        }

        for (int val : v) {
            if (l <= val && val <= u) {
                ans -= 1;
            }
        }

        cout << ans + 1 << endl;
    }

    return 0;
}
