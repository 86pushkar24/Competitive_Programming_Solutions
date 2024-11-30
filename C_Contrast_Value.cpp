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

void push(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    a.resize(unique(a.begin(), a.end()) - a.begin());
    n = (int) a.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (i == 0 || i == n - 1 || (a[i] > a[i - 1]) == (a[i] > a[i + 1])) {
        ans += 1;
      }
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
    push();
    }
}

