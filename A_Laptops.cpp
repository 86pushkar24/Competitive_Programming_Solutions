// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
        mp[a[i]] = b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    for (int i = n - 1; i >= 1; i--)
    {
        if (mp[a[i]] != b[i])
        {
            cout << "Happy Alex" << endl;
            return;
        }
    }
    cout << "Poor Alex" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    // cin >> tc; 
    while (tc--){
    push();
    }
}

