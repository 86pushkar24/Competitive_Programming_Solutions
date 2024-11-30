#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
     int n;
    cin >> n;
    vector<int> nums(n);
        for (int i = 0; i < n; ++i) cin >> nums[i];
        map<int, int> cnt;
        int grp = 0;
        for (int i = 0; i < n; ++i) {
            if (cnt[((1 << 31) - 1) - nums[i]] == 0) {
                cnt[nums[i]]++;
                grp++;
            } else  cnt[((1 << 31) - 1) - nums[i]]--;
        }

        cout << grp << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}

