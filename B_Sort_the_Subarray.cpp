// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
// #define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int diff;
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
        {
            diff = i;
            break;
        }
    int st, en;
    st = en = diff;
    while (st > 0 && b[st] >= b[st - 1])
        st--;
    while (en < n - 1 && b[en] <= b[en + 1])
        en++;
    cout << st + 1 << " " << en + 1 << endl;
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
