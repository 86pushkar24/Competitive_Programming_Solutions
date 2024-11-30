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
    for(auto &i : arr) cin >> i;
    int ans = 1,len=1;
    for(int i=0;i<n;i++){
        if(i>0){
            if(arr[i]>=arr[i-1]){
                len++;
                ans = max(ans,len);
            }else len = 1;
        }
    }
    cout << ans << endl;
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

