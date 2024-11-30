// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
     int n; cin >> n;
    vector<int> v(n);
 
    int res = 0, cntOnes = 0;
    int  good = -1, last = -1;
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i]) cntOnes++;
        else {
            if (good == -1) good = i;
            res += cntOnes;
        }
 
        if (v[i]) last = i;
    }
 
    int res2 = 0; cntOnes = 0;
 
    if (good != -1) v[good] = 1;
    for (int i = 0; i < n; i++) {
        if (v[i]) cntOnes++;
        else res2 += cntOnes;
    }
 
 
    int res3 = 0; cntOnes = 0;
    if (good != -1) v[good] = 0;
    if (last != -1) v[last] = 0;
    for (int i = 0; i < n; i++) {
        if (v[i]) cntOnes++;
        else res3 += cntOnes;
    }
 
    // cout << good << endl;
    // cout << res << " " << res2 << " " <<  res3 << endl;
    cout << max(res,max(res2, res3)) << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    int tc(1);
    cin >> tc;
    while (tc--)
    {
        push();
    }
}
