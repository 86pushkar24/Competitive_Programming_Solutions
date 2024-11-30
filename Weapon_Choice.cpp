#include <stdcpp.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear()
{
    int h, x, k1, k2, k;
    cin >> h >> x >> k1 >> k2 >> k;
    int r1 = (h + x - 1) / x;
    int r2 = min(k, (h + k1 - 1) / k1);
    h = h - k1 * r2;
    if (h > 0)
        r2 = r2 + (h + k2 - 1) / k2;
    cout << min(r1, r2) << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        clear();
    }
}x
