#include <bits/stdc++.h>
using namespace std;

void push()
{
    int n;
    cin >> n;
    vector<int> v(n), p(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        p[i] = i + 1;

    vector<pair<int, int>> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            ans.push_back({p[j + 1], p[j]});
            swap(p[j], p[j + 1]);
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int x = v[i], j = 0;
        while (p[j] != x)
            j++;
        while (j < i)
        {
            ans.push_back({p[j + 1], p[j]});
            swap(p[j], p[j + 1]);
            j++;
        }
    }

    cout << ans.size() << endl;
    for (auto &i : ans)
        cout << i.first << ' ' << i.second << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    while (t--)
        push();
    return 0;
}
