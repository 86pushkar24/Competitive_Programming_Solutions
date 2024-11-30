#include <stdcpp.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool primos(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> perm(int N, vector<int>& pre) {
    if (N <= 2) {
        return -1;
    }

    int k1 = -1, k3 = -1;
    for (int i = 0; i < N; ++i) {
        if (pre[i] == 1) {
            k1 = i;
        } else if (pre[i] == 3) {
            k3 = i;
        }
    }

    swap(pre[k1], pre[k3]);

    return pre;
}

// void solve() {
// }

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        // solve();

        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        vector<int> sol = perm(N, arr);

        if (sol[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int num : sol) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
