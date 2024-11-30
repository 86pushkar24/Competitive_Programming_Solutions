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
    int a, b, c, d; cin >> a >> b >> c >> d;
    int answer = a + 2 * min(b, c);
    int left = max(b, c) - min(b, c) + d;
    left = min(left, a + 1);
    cout << (a == 0 ? 1 : answer + left) << endl;
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

