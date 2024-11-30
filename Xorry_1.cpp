#include <stdcpp.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

pair<int, int> find(int n)
{
    pair<int, int> ans;
    int ans2 = 1e9;

    int j = 1;

    while (j <= n)
    {
        int neww = j ^ n;

        if (neww <= n && max(neww, j) - min(neww, j) < ans2)
        {
            ans = {min(neww, j), max(neww, j)};
            ans2 = max(neww, j) - min(neww, j);
        }
        j = j* 2;
    }

    return ans;
}

void clear()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        pair<int, int> xorr = find(n);

        cout << xorr.first << " " << xorr.second << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    clear();

    return 0;
}
