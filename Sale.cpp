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

void push(){
    int n;
        cin >> n;
        vector<int> ds;
        for (int i = 0; i < n; i++) {
            int sl;
            cin >> sl;
            ds.push_back(sl);
        }
        vector<int> total;
        int curr = 0;
        for (int i = 0; i < n; i++) {
            curr += ds[i];
            total.push_back(curr + ds[i]); 
        }
        int maxi = *max_element(total.begin(), total.end());
        cout << maxi << endl;
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
}

