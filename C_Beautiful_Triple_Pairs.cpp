// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void read(vector<int>& nums) {
    for (int& num : nums) {
        cin >> num;
    }
}
void push() {
    int sz;
    cin >> sz;
    vector<int> nums(sz, 0);
    read(nums);
    map<pair<int,int>,int> p;
    map<pair<int,int>,int> q;
    map<pair<int,int>,int> ac;
    map<vector<int>,int> x;
    map<vector<int>,int> y;
    map<vector<int>,int> z;
    int ans = 0;
    for (int i = 0; i < sz - 2; i++) {
        int a = nums[i];
        int b = nums[i + 1];
        int c = nums[i + 2];
        p[{a, b}]++;
        q[{b, c}]++;
        ac[{a, c}]++;
        x[{a, b, c}]++;
        y[{b, c, a}]++;
        z[{a, c, b}]++;
        ans = ans + p[{a, b}] - x[{a, b, c}];
        ans = ans + q[{b, c}] - y[{b, c, a}];
        ans = ans + ac[{a, c}] - z[{a, c, b}];
    }

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
        push();
    }

    return 0;
}
