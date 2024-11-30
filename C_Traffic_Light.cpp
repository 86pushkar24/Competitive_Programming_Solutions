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
      int n; cin >> n; char s; cin >> s;
        string t; cin >> t; t+=t; 
        int index = 2*n - 1, answer = 0;
 
        for(int i = 2*n - 1; i>=0; i--)
        {
            if(t[i] == 'g') index = i;
            if(t[i] == s) answer = max(answer, index - i);
        }
 
        cout << answer << endl;

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

