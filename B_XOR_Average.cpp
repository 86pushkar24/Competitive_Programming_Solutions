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
 
        if(n%2)
        {
            for(int i = 1; i <= n; i++) cout << "1 ";
        }
        else
        {
            for(int i = 0; i < n - 2; i++) cout << 4 << " ";
            cout << 6 << " " << 2 ;
        }
        cout << endl;
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

