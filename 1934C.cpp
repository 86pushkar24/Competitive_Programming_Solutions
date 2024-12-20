#include <bits/stdc++.h>
using namespace std;

int ask(int x, int y)
{
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
        int n, m;
        cin >> n >> m;
        int d = 1 + ask(1, 1);
        int f = ask(1, d);
        f += f % 2;
        int g = ask(1 + f / 2, d - f / 2);
        int x = 1 + f / 2;
        int y = d - f / 2;
        g += g % 2;
        int k = ask(x + g / 2, y - g / 2);
        x += g / 2;
        y -= g / 2;
        x += k / 2;
        y -= k / 2;
        cout << "! " << x << " " << y << endl;
    }
}
