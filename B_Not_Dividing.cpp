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
    int n, i;
    cin>>n;
    vector<int>a(n);
    for (i = 0; i < n; i++) cin>>a[i];
    for (i = 0; i < n; i++) if(a[i]== 1) a[i]++;
    for(i=1;i<n;i++){
        if(a[i]%a[i-1]==0){
            a[i]++;
        }
    }
    for(auto it:a) cout<<it<<' ';
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

