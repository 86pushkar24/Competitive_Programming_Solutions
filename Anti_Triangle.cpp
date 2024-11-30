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
    int a, b;
    cin >> a >> b;
    vector<int> ans;
    ans.push_back(b);
    bool flag = true;
    for (int i = 0; i < a - 1; i++)
    {
        ans.push_back(ans.back() + 1 + b);
        if (ans.back() > 1e9)
        {
            flag = false;
        }
    }
    if (flag)
    {
        for (auto it : ans)
        {
            cout << it << " ";
        }
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            cout << i << " ";
        }
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
