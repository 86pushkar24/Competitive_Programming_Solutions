// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define int long long

#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES";
#define no cout << "NO";
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define mii map<int, int>
#define pb push_back
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

/*
    Pushkar 
            Gupta's
                        Solution
                Start's
        Here
*/

void push(){
    int n, ct = 0, ans = 0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    mii mp;
    for (auto i : arr) mp[i]++;
    for (auto i : mp)
        ans += i.second * (i.second - 1ll) / 2ll * ct, ct += i.second;
    for (auto i : mp)
        ans += i.second * (i.second - 1ll) * (i.second - 2ll) / 6ll;
    cout << ans << endl;
}

/*
    Pushkar 
            Gupta's
                        Solution
                End's
        Here
*/

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--) push();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
