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
    vector<int> answer(n);
    for (auto &i : answer)
        cin >> i;

    vector<int> temp(10, 0);
    vector<int> count(10, 1);

    for (int i = 0; i < 10; i++)
    {
        temp[i] = answer[0];
        answer[0] += answer[0] % 10;
    }

    for (int i = 1; i < n; i++)
    {
        vector<int> mask(10, 0);

        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (abs(answer[i] - temp[k]) % 20 == 0 && answer[i] % 10 && temp[k] % 10 && answer[i] % 2 == 0 && temp[k] % 2 == 0)
                {
                    mask[k] = 1;
                }

                if (answer[i] == temp[k])
                    mask[k] = 1;
            }
            answer[i] += answer[i] % 10;
        }

        for (int j = 0; j < 10; j++)
        {
            count[j] += mask[j];
        }
    }

    cout << (*max_element(count.begin(), count.end()) == n ? "YES\n" : "NO\n");
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
