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
    int arr[n];
    int negative = 0, positives = 0;
    // read statement properly
    map<int, int> oks;
    vector<int> extra;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        oks[arr[i]]++;
        if (arr[i] or oks[0] <= 3)
            extra.push_back(arr[i]);
        negative += (arr[i] < 0);
        positives += (arr[i] > 0);
    }
    if (negative > 2 or positives > 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool poss = true;
        n = extra.size();
        for (int i = 0; i < n and poss; i++)
        {
            for (int j = i + 1; j < n and poss; j++)
            {
                for (int k = j + 1; k < n and poss; k++)
                {
                    if (oks[extra[i] + extra[j] + extra[k]] == 0)
                    {
                        poss = 0;
                    }
                }
            }
        }
        if (!poss)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
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
