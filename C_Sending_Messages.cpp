#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, x, y;
        cin >> n >> k >> x >> y;

        vector<ll> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        ll pre = 0;
        for (int i = 0; i < n; i++)
        {
            ll mini = min(y, abs(vec[i] - pre) * x);
            k = k - mini;
            pre = vec[i];
        }
        if (k > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
