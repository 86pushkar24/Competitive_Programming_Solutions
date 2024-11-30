// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n, k, x;
    cin >> n >> k >> x;
    int check1 = 0;
    int check2 = 0;
    int check3 = 0;
    if (k >= 3)
    {
        check1 = 1;
        check2 = 1;
        check3 = 1;
    }
    else if (k >= 2)
    {
        check1 = 1;
        check2 = 1;
    }
    else
    {
        check1 = 1;
    }

    if (x == 1)
    {
        check1 = 0;
    }
    else if (x == 2)
    {
        check2 = 0;
    }
    else if (x == 3)
    {
        check3 = 0;
    }
    vector<int> res;
    if (check1 == 1)
    {
        while (n != 0)
        {
            res.push_back(2);
            n -= 2;
        }
    }
    else if (check1 == 0 && check2 == 0)
    {
        cout << "NO" << endl;
        // continue;
    }
    else if (check1 == 0 && check3 == 0)
    {
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
            // continue;
        }
        else
        {
            while (n != 0)
            {
                res.push_back(2);
                n -= 2;
            }
        }
    }
    else if (check1 == 0)
    {
        if (n == 1)
        {
            cout << "NO" << endl;
            // continue;
        }
        else
        {
            if (n % 2 != 0)
            {
                res.push_back(3);
                n -= 3;
            }
            while (n != 0)
            {
                res.push_back(2);
                n -= 2;
            }
        }
    }
    else
    {
        cout << 69 << endl;
        // continue;
    }
    cout << "YES" << endl;
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
}
