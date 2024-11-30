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
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = str[j] - '0';
        }
    }
    int prev = arr[0][0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i][0] = arr[i + 1][0];
    }
    for (int i = 0; i < n - 1; i++)
    {
        arr[n - 1][i] = arr[n - 1][i + 1];
    }
    for (int i = n - 1; i > 0; i--)
    {
        arr[i][n - 1] = arr[i - 1][n - 1];
    }
    for (int i = n - 1; i > 0; i--)
    {
        arr[0][i] = arr[0][i - 1];
    }
    arr[0][1] = prev;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        push();
    }
}
