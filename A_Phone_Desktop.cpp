// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int a, b;
    cin >> a >> b;
    int c = (b+1)/2; 
    int d = 4*b;
    int e = (15*c)-d;
    int f = a-e;
    int g = max(0,(f+14)/15);
    int h = c+g;
    cout << h << endl;
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

