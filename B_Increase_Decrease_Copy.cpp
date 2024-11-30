// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define endl '\n'
#define all(v) v.begin(), v.end()
#define pb push_back
#define int long long int
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define read(a) for (auto &i : a) cin >> i

void push()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    read(arr);
    vector<int> arr2(n + 1, 0);
    read(arr2);
    int val = arr2.back();
    int res(0) ,flag(0);
    int sum = 1e15;
    for (int i = 0; i < n; i++)
    {
        res = res + abs(arr[i] - arr2[i]);
        if (val >= min(arr[i], arr2[i]) && val <= max(arr[i], arr2[i]))
        {
            flag = 1;
        }
        sum = min(sum, abs(arr[i] - val));
        sum = min(sum, abs(arr2[i] - val));
    }
    if (flag)
    {
        res++;
        cout << res << endl;
    }
    else
    {
        res = res + sum + 1;
        cout << res << endl;
    }
}


signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
