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
#define rall(x) x.rbegin(), x.rend()

void push(){
    
    int n(0),m(0),k(0),ans(0),cnt(0),sum(0);
    cin >> n;
    vector<int> v(n), v1(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++) cin >> v1[i];
    vector<int> vd;
    for (int i = 0; i < n; i++)
    {
        vd.push_back(v[i] - v1[i]);
    }
    sort(all(vd));
    int l = 0, r = n - 1;
    while (l < r)
    {
        if(-1 * vd[l] >= vd[r]) ans++ , r--, l++;
        else r--; 
    }
    cout << ans;
    cout << endl;
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

