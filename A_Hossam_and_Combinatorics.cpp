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
    int n, answer = 0; cin >> n;
    vector<int> a(n);
    for(auto &i : a)cin >> i;
    sort(a.begin(), a.end());
    int aa = 0, b = 0;
    for(auto i : a)
    {
        if(i == a[0]) aa++;
        else if(i == a[n-1]) b++;
    }
    cout << (b ? aa*b*2 : aa*(aa - 1)) << endl;
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

