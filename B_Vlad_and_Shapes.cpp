#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
        int n; cin >> n;
        set<int> sets;
        for (int i = 0; i < n; ++i) {
        string str; cin >> str;
        if(count(str.begin(), str.end(), '1') > 0) {
            sets.insert(count(str.begin(), str.end(), '1'));
            }
        }
        if (sets.size() == 1) cout << "SQUARE" << endl;
        else cout << "TRIANGLE" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}


