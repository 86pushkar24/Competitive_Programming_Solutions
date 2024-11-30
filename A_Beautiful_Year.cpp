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
    for (int i = n + 1; i < 10000; i++)
    {
        int freq[10];
        memset(freq, 0, sizeof(freq));
        int year = i;
        while (year != 0)
        {
            int k = year % 10;
            freq[k]++;
            year /= 10;
        }
        int flag = 0;
        for (int i = 0; i < 10; i++)
        {
            if (freq[i] > 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i << endl;
            break;
        }
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
