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
    int n;cin >> n;
    int arr[n], mini = INT_MAX;
    for (int i = 0; i < n; i++) {
    cin >> arr[i];
    mini = min(mini, arr[i]);
    }
    if (arr[0] == arr[n - 1] && arr[0] == mini) cout << "YES" << endl;
    else cout << "NO" << endl;
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

