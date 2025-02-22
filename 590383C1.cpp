#include "bits/stdc++.h"
using namespace std;

using i64 = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << a[0] << '\n';
    }
    else
    {
        int p = 0;
        int q = 0;
        for (int i = 0; i < n; i++)
        {
            int ap = a[i];
            int aq = (1 << 15) - 1 - a[i];
            int np = max(p | ap, q | aq);
            int nq = max(q | ap, p | aq);
            p = np;
            q = nq;
        }
        cout << p << '\n';
    }
}