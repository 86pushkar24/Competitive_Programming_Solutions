// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>
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
int ms;
bool srch(vector<int> &a, vector<int> &b, int it)
{
    int inp(0),k = a.size();
    for0(i, k)
    {
        int curr = ((it / b[i]) + 1) * a[i];
        inp += curr;
        if (inp >= ms) return true;
    }
    return inp >= ms;
}

void push(){
    int k, n;
    cin >> k >> n;
    ms = k;
    vector<int> arr1(n), arr2(n);
    for0(i, n) cin >> arr1[i];
    for0(i, n) cin >> arr2[i];
    int low(0), high(1e12);
    while (high - low > 1)
    {
        int mid = (low + high) / 2;
        if (srch(arr1, arr2, mid)) high = mid;
        else low = mid;
    }
    if (srch(arr1, arr2, low))
    {
        cout << low+1 << endl;
        return;
    }
    cout << high+1 << endl;
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
