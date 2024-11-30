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
    int arr[n + 1];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    sort(arr + 1, arr + n + 1);
    int counter = 0;
    int now_sum = 0;
    for (int i = n; i >= 1; i--)
    {
        now_sum += arr[i];
        counter += 1;
        if (now_sum > (sum - now_sum))
        {
            break;
        }
    }

    cout << counter << endl;
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
