// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;cin >> n;
    int sum(0),m(0),opr(0);
    vector<vector<int> > res(2 * n + 43); 
    int a[n + 1][n + 1];             
    for (int i = 1; i <= n; i++)
    {
        res[opr].push_back(1);
        res[opr].push_back(i);
        for (int j = n, q = 1; j >= 1; j--, q++)
        {
            res[opr].push_back(j);
            a[i][q] = j;
        }
        opr++;
        res[opr].push_back(2);
        res[opr].push_back(i);
        for (int j = n, q = 1; j >= 1; j--, q++)
        {
            res[opr].push_back(j);
            a[q][i] = j;
        }
        opr++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            sum += a[i][j];
        }
    }
    cout << sum << " " << opr << endl;
    for (int i = 0; i < opr; i++)
    {
        cout << res[i][0] << " " << res[i][1] << " ";
        for (int j = 2; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
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
    return 0;
}
