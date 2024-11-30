// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n, m, x, y, dist; cin >> n >> m >> x >> y >> dist;
    int left = y - 1;
    int right = m - y;
    int div1 = left / dist;
    int div2 = right / dist;
    int tot = div1 + div2 + 1L;
    int up = x - 1;
    int down = n - x;
    int div3 = up / dist;
    int div4 = down / dist;
    int tot2 = div4 + div3 + 1L;
    cout << tot * tot2 << endl;
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

    return 0;
}


