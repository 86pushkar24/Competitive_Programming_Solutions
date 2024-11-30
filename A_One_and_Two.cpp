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
    vector<int> arr(n);
    int total = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 2)
        {
            total++;
        }
    }
    if (total % 2 == 1)
    {
        cout << -1 << endl;
        // continue;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            count++;
            total--;
        }
        if (total == count)
        {
            cout << i + 1 << endl;
            break;
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
