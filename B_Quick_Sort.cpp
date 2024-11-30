// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
     int n, k; cin >> n >> k;
        vector<int> a(n); for(auto &i : a)cin >> i;
        int replace = n, find = 1;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == find)
            {
                find++;
                replace--;
            }
        }
        cout << (replace + k - 1)/k << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
}
