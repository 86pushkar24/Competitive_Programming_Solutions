// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;
#define repa(i,a,b) for(int i=a;i <= b;i++)
#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> v;
    v.push_back(a), v.push_back(b), v.push_back(c);
    sort(v.begin(), v.end());
    int cnt = 0;
    repa(i, 0, n)
    {
        repa(j, 0, n)
        {
            int x = i * v[0];
            int y = j * v[1];
            int z = (n - x - y) / v[2];
            if (z >= 0 && x + y + z * v[2] == n)
            {
                cnt = max(cnt, i + j + z);
            }
        }
    }
    cout << cnt;
    return 0;
}
