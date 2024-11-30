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
    int m;
    cin >> m;
    string st;
    cin >> st;
    map<char, vector<int> > ind;
    for(int i = 0; i < m; i++) {
        ind[st[i]].push_back(i);
    }
    int x = 0, y = 0;
    string ans = st;
    for(char c : st) {
        if(c == 'N') y++;
        else if(c == 'S') y--;
        else if(c == 'E') x++;
        else x--;
    }
    if(x == 0 && y == 0) {
        for(int i = 0; i < m; i++) {
            ans[i] = 'R';
        }
        cout << ans << endl;} 
    else cout << "NO" << endl;
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

