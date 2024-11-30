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
    int n;
    cin >> n;
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
    unordered_set st;
    int i = 0;
    while (i < n)
    {
        int x, y;
        cin >> x >> y;
        pq.push({x, 0, y});
        pq.push({y, 1, x});
        i++;
    }
    bool tt = false;
    int ans = 0, curr = 0;
    while (pq.size())
    {
        auto [x, y, z] = pq.top();
        if (tt == false)
            pq.pop();
        if (y == 0)
        {
            curr++;
            st.insert(x);
        }
        else
        {
            curr--;
            st.erase(st.find(z));
            ans += st.order_of_key(z);
        }
    }
    cout << ans << endl;
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
