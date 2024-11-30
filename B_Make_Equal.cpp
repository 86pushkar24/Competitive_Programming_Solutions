#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int k = sum / n;
    int cont = 0;

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > k)
        {
            cont = cont + arr[i] - k;
        }
        else if (arr[i] < k)
        {
            if (cont >= k - arr[i])
            {
                cont -= (k-arr[i]);
            }
            else
            {
               flag = false;
            }
        }
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        clear();
    }
}
