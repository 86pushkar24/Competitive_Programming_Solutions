

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
// #include<adhocproblems.h>
using namespace std;
#define int long long

signed main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = d;
    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d << endl;
    }
    else
    {
        for (int i = 1; i <= d; i++)
        {
            if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0))
            {
                count--;
            }
        }
        cout << count << endl;
    }

    return 0;
}
