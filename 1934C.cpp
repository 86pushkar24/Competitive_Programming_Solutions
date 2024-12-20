#include <bits/stdc++.h>
using namespace std;

int n, m;
int ask(int x, int y)
{
    if(x<1 || y<1 || x>n || y>m) return 7;
    cout << "? " << x << " " << y << endl;
    int r;
    cin >> r;
    return r;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int d = ask(1, 1);
        int d2 = ask(n, 1);
        int x = n + d - d2 + 1;
        x /= 2;
        int y = d - x + 2;
        int d3 = ask(n, m);
        int x2 = 2 * n + m - 1 - d2 - d3;
        x2 /= 2;
        int y2 = d2 + x2 + 1 - n;
        if (ask(x, y) == 0)
        {
            cout << "! " << x << " " << y << endl;
        }
        else
        {
            cout << "! " << x2 << " " << y2 << endl;
        }
    }
}