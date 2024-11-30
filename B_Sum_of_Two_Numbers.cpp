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
        if(n % 10 != 9) cout << (n + 1) / 2 << " " << n / 2 << "\n";
        else
        {
            string a, b; int cnt = 0;
            while(n % 10 == 9)
            {
                if(cnt % 2) 
                {
                    a += "5";
                    b += "4";
                }
                else 
                {
                    b += "5";
                    a += "4";
                }
                cnt++;
                n /= 10;
            }
            if(n == 0) cout << b << " " << a << "\n";
            else if(n == 1) cout << 1 << a << " " << b << "\n";
            else cout << (n + 1) / 2 << a << " " << n / 2 << b << "\n"; 
        }
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

