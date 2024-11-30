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
    vector<int> v;
    vector<int> neg, pos;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x < 0)
        {
            neg.push_back(x);
        }
        else
        {
            pos.push_back(x);
        }
    }
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());
    int l1 = neg.size();
    int l2 = pos.size();
    int sum = 0;
    if (l1 % 2 == 0)
    {
        for (int i = 0; i < l1; i++)
        {
            sum += abs(neg[i]);
        }
        for (int i = 0; i < l2; i++)
        {
            sum += pos[i];
        }
        cout << sum << endl;
        return;
    }
    if (l1 % 2 == 1 and l2 != 0)
    {
        for (int i = 0; i < l1 - 1; i++)
        {
            sum += abs(neg[i]);
        }
        for (int i = l2 - 1; i > 0; i--)
        {
            sum += pos[i];
        }
        if (abs(neg[l1 - 1]) >= pos[0])
        {
            sum += abs(neg[l1 - 1]);
            sum -= pos[0];
        }
        else
        {
            sum += pos[0];
            sum -= abs(neg[l1 - 1]);
        }
    }
    if (l1 % 2 == 1 and l2 == 0)
    {
        for (int i = 0; i < l1 - 1; i++)
        {
            sum += abs(neg[i]);
        }
        sum -= abs(neg[l1 - 1]);
    }
    cout << sum << endl;
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
