// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LONG_MAX >> 1;

int bin_pow(int a, int p) {
  int res = 1;
  while (p) {
    if (p & 1) {
      (res *= a) %= MOD;
    }
    p >>= 1;
    (a *= a) %= MOD;
  }
return res;
}
void push(){
 	int n;	
 	cin >> n;
 	int ans=1;
  	(ans*=n*(n+1)) %= MOD;
  	(ans*=(2 * n + 1)) %= MOD;
  	int inv = bin_pow(3, MOD - 2);
  	(ans*=inv)%= MOD;
  	int temp= (n * (n + 1)) / 2;
  	temp%=MOD;
  	ans-=temp;
  	ans+=MOD;
  	ans%=MOD;
  	cout << (2022*ans)%MOD<<endl;
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

