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
    int n; cin >> n;
    int rem = n % 5;
    int diff = 5 -rem;
    if (rem == 0)
    {
        cout << n << endl;
    }
    else if (rem <= 2)
    {
        cout << (n-rem) << endl;
    }
   else
   {
    cout << (n + diff) << endl;
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

