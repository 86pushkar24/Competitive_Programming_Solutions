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

int push(){
    int n,m,k;
    cin>>n>>m>>k;
    int total = 0;
    bool flag = 0;
    while (n >= 1 && k >=1 )
    {
        if (n>=1 && m>=1 && k>=1)
        {
            total +=1;
            n -= 1;
            m -= 1;
            k -= 1;
        }
        else if(n >= 2 && m == 0 && k >=1){
            total +=1;
            n -= 2;
            // m -= 1;
            k -= 1;
        }
        else if(n >= 2 && m == 0 && k >=1){
            total +=1;
            n -= 2;
            // m -= 1;
            k -= 1;
        }
        else
        {
            return total;
        }
    }
    // cout << n << endl << m <<endl << k << endl;
    //     cout << total << endl;
    return total;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    // cin >> tc; 
    while (tc--){
    int ans = push();
    cout << ans << endl;
    }
}

