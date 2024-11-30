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
    int A[100];
    for (int j = 0; j < n; j++)
    {
        cin >> A[j];
    }
    int a = 1;
    int count = 0;
    while (a != 0)
    {
        int b = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + A[i];
        }
        int pro = 1;
        for (int i = 0; i < n; i++)
        {
            pro = pro * A[i];
        }
        if (sum >= 0 && pro == 1)
        {
            a = 0;
        }
        else if (sum < 0 && pro == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (A[i] == -1 && b == 0)
                {
                    A[i] = 1;
                    b = 1;
                }
            }
            count++;
        }
        else if (sum < 0 && pro == -1)
        {
            for (int i = 0; i < n; i++)
            {
                if (A[i] == -1 && b == 0)
                {
                    A[i] = 1;
                    b = 1;
                }
            }
            count++;
        }
        else if (sum >= 0 && pro == -1)
        {
            for (int i = 0; i < n; i++)
            {
                if (A[i] == -1 && b == 0)
                {
                    A[i] = 1;
                    b = 1;
                }
            }
            count++;
        }
    }
    cout << count << endl;
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
