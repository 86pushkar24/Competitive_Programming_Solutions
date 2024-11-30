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

void push() {
    int A,B,K;
    cin >>A>>B>>K;
    int res(0);
    while (true)
    {
        if (B%K == 0 && B/K >= A)
        {
            res++;
            B/=K;
        }

        else if(B%K == 0)
        {
            res = res + B - A;
            break;
        }
        else
        {
            res = res+ B % K;
            B = B-B%K;
        }
    }
    cout << res << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--) {
        push();
    }

    return 0;
}

