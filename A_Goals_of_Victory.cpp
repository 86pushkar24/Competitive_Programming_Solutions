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
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum == 0)
        cout << 0 << endl;
    else
        cout << -sum << endl;
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
