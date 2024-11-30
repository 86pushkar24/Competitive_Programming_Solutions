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
    int n,ct(0);
    cin >> n;
    int arr[n];
    for(int a=0;a<n;a++) cin>>arr[a];
    map <int,int> mp;
    for (int a = 0;a < n;a++)
        mp[arr[a] - a]++;
    for (auto i : mp)
        ct += i.second * (i.second - 1) / 2;
    cout << ct << endl;
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

