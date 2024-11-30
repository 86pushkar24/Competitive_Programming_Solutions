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
    char lr;
    string answer="",inp;
    cin>>lr>>inp;
    string comp="qwertyuiopasdfghjkl;zxcvbnm,./";
    int x=(lr=='R')?-1:1;
    for (char i: inp)
    {
    cout<<comp[comp.find(i)+x];
    }
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

