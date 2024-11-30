// #include <stdcpp.h>
#include <bits/stdc++.h>
// #include <iostream>
x
using namespace std;

#define endl '\n'
#define ll long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int &i : arr)
    {
        cin >> i;
    }
    string s;
    cin >> s;
    int i = 0, j = n - 1;
    int x = 0;
    while (i != j)
    {
        if (s[x] == 'L')
        {
            ++i;
        }
        else
        {
            --j;
        }
        ++x;
    }
    long long curr = arr[i] % m;
    vector<long long> ans;
    ans.push_back(curr);
    s.pop_back();
    while (s.size())
    {
        if (s.back() == 'L')
        {
            --i;
            curr *= 1ll * arr[i];
            curr %= m;
        }
        else
        {
            ++j;
            curr *= 1ll * arr[j];
            curr %= m;
        }
        s.pop_back();

        ans.push_back(curr);
    }
    reverse(ans.begin(), ans.end());
    for (int i : ans)
    {
        cout << i << ' ';
    }
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        clear();
    }
}
