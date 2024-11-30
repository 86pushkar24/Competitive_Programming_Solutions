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
    int x = 1, y = 1;
    vector<int> answer(n);
    int ans = true;
    for (int i = 0; i < n; i++)
    {
        cin >> answer[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int k = i;
        if (answer[i] > answer[i + 1])
        {
            if (ans == false)
            {
                cout << "no";
                return;
            }
            x = i + 1;
            while (i < n)
            {
                if (i < n - 1 && answer[i] > answer[i + 1])
                    i++;
                else
                    break;
            }

            y = i + 1;
            // cout<<k<<"\n";
            if (k != 0 && answer[i] < answer[k - 1])
            {
                cout << "no";
                return;
            }

            if (i == n - 1 || answer[k] <= answer[i + 1])
                ans = false;
            else
            {
                cout << "no";
                return;
            }
        }
    }
    cout << "yes\n"
         << x << " " << y;
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
