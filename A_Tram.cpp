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
    int lrr[n];
    int err[n];
    int crr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> lrr[i];
        cin >> err[i];
    }
    crr[0] = 0;
    for (int i = 1; i < n; i++)
    {
        crr[i] = crr[i - 1] + err[i - 1] - lrr[i - 1];
    }
    cout << *max_element(crr, crr + n);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        push();
    }
}
