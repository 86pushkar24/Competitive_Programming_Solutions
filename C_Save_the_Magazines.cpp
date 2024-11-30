// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

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
    string s;
    cin >> s;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    int sum = 0;
    int i = 0, j = 0;
    while (i < n)
    {
        if (s[i] == '1')
        {
            sum += v[i];
            i++;
        }
        else
        {
            break;
        }
    }
    while (i < n and j < n)
    {
        while (i < n and s[i] == '1')
            i++;
        j = i + 1;
        while (j < n)
        {
            if (s[j] == '1')
            {
                if (v[j] > v[i])
                {
                    sum += v[j];
                    j++;
                }
                else
                {
                    sum += v[i];
                    i = j;
                    j++;
                }
            }
            else
            {
                i = j;
                j++;
                break;
            }
        }
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
