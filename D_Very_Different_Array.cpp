#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define ll long long

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll arr[x];
    rep(i, x) cin >> arr[i];
    ll b[y];
    rep(i, y) cin >> b[i];
    sort(arr, arr + x);
    sort(b, b + y);

    ll prefixArr[x];
    ll prefixB[y];
    rep(i, x)
    {
        if (i == 0)
            prefixArr[i] = arr[i];
        else
            prefixArr[i] = arr[i] + prefixArr[i - 1];
    }

    rep(i, y)
    {
        if (i == 0)
            prefixB[i] = b[i];
        else
            prefixB[i] = prefixB[i - 1] + b[i];
    }

    ll suffixArr[x];
    ll suffixB[y];

    for (ll i = x - 1; i >= 0; i--)
    {
        if (i == x - 1)
            suffixArr[i] = arr[i];
        else
            suffixArr[i] = suffixArr[i + 1] + arr[i];
    }

    for (ll i = y - 1; i >= 0; i--)
    {
        if (i == y - 1)
            suffixB[i] = b[i];
        else
            suffixB[i] = suffixB[i + 1] + b[i];
    }

    ll result = -1;

    for (ll i = 0; i <= x; i++)
    {
        ll nprefixArr = i;
        ll nsuffixArr = x - i;
        ll nprefixB = x - i;
        ll nSuffixB = i;
        ll sum;
        if (i == 0)
        {
            sum = suffixB[y - nprefixB] - prefixArr[x - 1];
        }
        else if (i == x)
        {
            sum = suffixArr[0] - prefixB[x - 1];
        }
        else
            sum = suffixArr[x - nprefixArr] + suffixB[y - nprefixB] - prefixArr[nsuffixArr - 1] - prefixB[nSuffixB - 1];
        result = max(sum, result);
    }
    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
