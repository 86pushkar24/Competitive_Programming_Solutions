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

void push() {
    int n , m;
    cin >> n >> m;
    vector <int> factors;
    int x = sqrt(n);
    for(int i = 1;i<=x;++i) {
        if(n % i == 0) {
            factors.push_back(i);
            if(n/i != i) {
                factors.push_back(n/i);
            }
        }
    }
    for(int &votes : factors) {
 
        if(votes > 1 && votes <= m) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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

