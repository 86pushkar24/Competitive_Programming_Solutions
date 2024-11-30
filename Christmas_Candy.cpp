#include<iostream>
using namespace std;

// int main()
// {
//     // your code goes here
    void solve()
    {
        int n;
        cin >> n;
        int arr[n];
        rep(i, 0, n) cin >> arr[i];
        int ans = 0, max1 = 0;
        vector<int> v(n, -1);
        for (int i = 0; i < n; i++)
        {
            max1 = max(max1, arr[i]);
            v[i] = max1;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < v[i])
            {
                ans++;
            }
            cout << ans << endl;
        }
    }
}
