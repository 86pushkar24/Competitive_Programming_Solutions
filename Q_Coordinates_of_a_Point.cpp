// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    double x,y;
    cin >> x >> y;
    if(x<0 && y< 0) cout << "Q3" << endl;
    if(x>0 && y> 0) cout << "Q1" << endl;
    if(x<0 && y> 0) cout << "Q2" << endl;
    if(x>0 && y< 0) cout << "Q4" << endl;
    if(x==0 && y == 0) cout << "Origem" << endl;
    if((x > 0 || x < 0) && y == 0) cout << "Eixo X" << endl;
    if(x==0 && (y > 0 || y<0)) cout << "Eixo Y" << endl;
    // if(x<0 && y< 0) cout << "Q3" << endl;
    // if(x<0 && y< 0) cout << "Q3" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc; cin >> tc; while (tc--){
    clear();
    // }
}

