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
    int n; cin >> n;
    vector<int> a(n),b;
    for(auto &i : a)cin >> i;
    b = a;
    sort(b.begin(),b.end());
    int ii = 0, jj = n-1;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(b[i]==a[ii]){ii++;count++;}
        else if(b[i] == a[jj]){jj--;count++;}
    }
    cout << ( (count==n) ? "YES\n" : "NO\n");
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

