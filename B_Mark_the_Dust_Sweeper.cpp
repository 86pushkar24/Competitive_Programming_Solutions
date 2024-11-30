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
    int arr[n];
    int ans = 0;
    int s = 0 , minus = 0;
    for(int i = 0;i<n;i++) {
          cin >> arr[i];
          s += arr[i];
          if(i != n-1) {
                if(s and arr[i] == 0) {
                      arr[i]++;
                      minus++;
                      ans++;
                }
          }
    }
    for(int i = 0;i<n-1;i++) {
          int mx = min(minus , arr[i]);
          arr[i] -= mx;
          minus -= mx;
          ans += arr[i];
    }
    cout << ans << endl ;
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

