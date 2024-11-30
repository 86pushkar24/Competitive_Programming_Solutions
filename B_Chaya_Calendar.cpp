// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    long long curr = 0;
    for (int i = 0; i < n; ++i)
    {
        long long mult = curr / arr[i];
        curr = (mult + 1ll) * arr[i];
    }
    cout << curr << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        push();
    }
}

