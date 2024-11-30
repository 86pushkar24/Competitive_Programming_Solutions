// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define input(v, SIZE)              \
    vector<int> v(SIZE + 1);        \
    for (int z = 1; z <= SIZE; z++) \
    {                               \
        cin >> v[z];                \
    }
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin >> n;
    input(v, n);
    int sc = 1, bc = n, i = 1, j = n;
    bool tt = false, tk = false;
    while (i < j)
    {
        tt = false, tk = false;
        if (v[i] == sc || v[i] == bc)
        {
            if (v[i] == sc)
            {
                i++;
                sc++;
            }
            else
            {
                i++;
                bc--;
            }
        }
        else
            tt = true;
        if (v[j] == bc || v[j] == sc)
        {
            if (v[j] == bc)
            {
                j--;
                bc--;
            }
            else
            {
                j--;
                sc++;
            }
        }
        else
            tk = true;
        if (tt && tk)
            break;
    }
    if (tt && tk)
        cout << i << " " << j << endl;
    else
        cout << -1 << endl;
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
