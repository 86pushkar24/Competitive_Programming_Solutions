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
    int n, k;
    cin >> n >> k;
    vector<int> answer(n), prefix(n);
    for (auto &i : answer)
    cin >> i;
    sort(answer.begin(), answer.end(), greater<int>());
    partial_sum(answer.begin(), answer.end(), prefix.begin());
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        int answerr = prefix[x - 1];
        if (y != x)
            answerr -= prefix[x - 1 - y];
        cout << answerr <<endl;
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
