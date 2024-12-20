#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> mp;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int x[2] = {}, y[2] = {};
        int f = 0;
        for (auto &i : mp)
        {
            if (i.second >= 2)
            {
                x[0] = i.first;
                i.second -= 2;
                f++;
                break;
            }
        }
        for (auto &i : mp)
        {
            if (i.second >= 2)
            {
                y[0] = i.first;
                i.second -= 2;
                f++;
                break;
            }
        }

        auto it = mp.end();
        it--;
        while (true)
        {
            if ((*it).second >= 2)
            {
                x[1] = (*it).first;
                (*it).second -= 2;
                f++;
                break;
            }
            if (it == mp.begin())
                break;
            it--;
        }
        it = mp.end();
        it--;
        while (true)
        {
            if ((*it).second >= 2)
            {
                y[1] = (*it).first;
                (*it).second -= 2;
                f++;
                break;
            }
            if (it == mp.begin())
                break;
            it--;
        }
        if (f < 4)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        if ((long long)(x[1] - x[0]) * (y[1] - y[0]) < (long long)(x[1] - y[0]) * (y[1] - x[0]))
        {
            swap(x[1], y[1]);
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << x[i] << " " << y[j] << " ";
            }
        }

        cout << '\n';
    }
}
