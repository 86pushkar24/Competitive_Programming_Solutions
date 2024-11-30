#include <stdcpp.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int fl = 1;
    for (int i = 0; i < n - 1; i++) {
        if (str[i] > str[i + 1]) {
            str.erase(i, 1);
            fl = 0;
            break;
        }
    }
    if (fl) {
        str.pop_back();
    }
    cout << str << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
