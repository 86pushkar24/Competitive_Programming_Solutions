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

struct score{
  int rn;
  int wkt;
  int pts;
};

void push(){
    vector<score> ply(22);
    for (int i = 0; i < 22; ++i) {
      cin>>ply[i].rn>>ply[i].wkt;
      ply[i].pts=ply[i].rn+ply[i].wkt*20;
    }
    int maxi = -1;
    int best = -1;
    for (int i = 0; i < 22; ++i) {
      if(ply[i].pts > maxi) {
    maxi = ply[i].pts;
    best = i;
    }
    }
    cout << best + 1 << endl;
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

