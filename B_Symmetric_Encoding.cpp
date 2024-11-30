#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

void push() {
    int n;
    string b;
    cin >> n >> b;
    auto fn = [](const string& b, string& s) {
        string r = b;
        sort(all(r));
        r.erase(unique(all(r)), r.end());
        unordered_map<char, char> mpp;
        int len = r.size();
        for (int i = 0; i < len; ++i) {
            mpp[r[i]] = r[len - 1 - i];
        }
        s = "";
        for (char ch : b) {
            s += mpp[ch];
        }
    };
    string s;
    fn(b, s);
    cout << s << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        push();
    }
    return 0;
}
