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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int check = 0;
    int minni = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            check = 1;
            break;
        }
        else
        {
            minni = min(arr[i + 1] - arr[i], minni);
        }
    }
    if (check == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        minni++;
        if (minni % 2 == 0)
        {
            cout << minni / 2 << endl;
        }
        else
        {
            cout << (minni / 2) + 1 << endl;
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
