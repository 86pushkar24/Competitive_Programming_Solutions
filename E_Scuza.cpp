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
    int q;
    cin >> q;
    int prefix_mx[n];
    int prefix_sum[n];
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        prefix_mx[i] = a;
        if (i)
            prefix_mx[i] = max(prefix_mx[i], prefix_mx[i - 1]);
        prefix_sum[i] = a;
        if (i)
            prefix_sum[i] += prefix_sum[i - 1];
    }
    while (q--)
    {
        long long a;
        cin >> a;
        int low = 0, high = n - 1, ans = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (prefix_mx[mid] <= a)
            {
                ans = prefix_sum[mid];
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << " ";
    }
    cout << endl;
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
