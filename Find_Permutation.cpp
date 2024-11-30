// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    int n;
        cin >> n;

        vector<int> arr(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> A[i];
        }
        unordered_set<int> seen;
        vector<int> result;

        for (int i = 2 * n - 1; i >= 0; --i) {
            if (seen.count(A[i])) {
                result.push_back(A[i]);
                seen.erase(A[i]);
            } else {
                seen.insert(A[i]);
            }
        }

        reverse(result.begin(), result.end());

        for (int i = 0; i < N; ++i) {
            cout << result[i] << " ";
        }

        cout << endl;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}


