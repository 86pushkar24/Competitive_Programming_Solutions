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
    int x = 0;
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        check = (check^arr[i]);
    }
    if (check == 0)
    {
        cout << 0 << endl;
    }
    else if (n & 1)
    {
        cout << check << endl;
    }
    else
    {
        cout << -1 << endl;
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
