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
    int n;
    cin >> n;
    int arr[n];
    vector<int> par[2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        par[arr[i] % 2].push_back(i);
    }
    if (par[0].size() == 0 or par[1].size() == 0)
    {
        cout << n - 1 << endl;
        int x = arr[0] % 2;
        for (int i = 0; i < (int)par[x].size() - 1; i++)
        {
            cout << par[x][i] + 1 << ' ' << par[x].back() + 1 << endl;
        }
    }
    else
    {
        cout << n - 1 << endl;
        int x = arr[0] % 2;
        for (int i = 0; i < (int)par[x].size() - 1; i++)
        {
            cout << par[x][i] + 1 << ' ' << par[x].back() + 1 << endl;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != x)
            {

                cout << 1 << ' ' << i + 1 << endl;
            }
        }
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
}
