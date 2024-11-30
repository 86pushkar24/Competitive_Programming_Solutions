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
    char ch;
    int p[26] = {0};
    cin >> ch;
    cin >> ch;
    while(ch != '}')
    {
        if(ch == ',') {cin >> ch;continue;}
        int a = (int)(ch-'a');
        p[a]++;
        cin >> ch;
    }
    int ans=0;
    for(int i = 0; i < 26;i++) if(p[i] > 0) ans++;
    cout << ans << endl;
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

