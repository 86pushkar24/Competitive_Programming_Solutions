// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    string s;
        cin >> s;
        int cntA = 0, cntB = 0;
        for (char c : s) {
            if (c == 'A') cntA++;
            else if (c == 'B')
                cntB++;
        }
        if (cntA > cntB)   cout << 'A' << endl;
        else  cout << 'B' << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}

