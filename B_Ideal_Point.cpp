// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

int n ,k , l , r;
void push(){
    cin >> n >> k;
    bool left = false;
    bool right = false;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        if (l == k) left = true;
        if (r == k) right = true;
    }
    cout << (left && right ? "YES" : "NO") << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int T = 1; 
    cin >> T; 
    while (T--){
    push();
    }
}

