

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2050)
        {
            cout << -1 << endl;
        }
        else
        {
            int a = n / 2050;
            int temp(0);
            while (a > 0)
            {
                temp = temp + a % 10;
                a = a / 10;
            }
            cout << temp << endl;
        }
    }
    return 0;
}
