#include <bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define For for(ll i = 0; i < n;++i)
using namespace std;

int main()
{
  ll t;
  cin >> t;
  while (t--){
    ll n;
    cin >> n;
    ll arr[n];
    ll start = -1;
    bool tempi = true;
    For{
        cin >> arr[i];
        if(arr[i] == 1 && tempi){
            start = i;
            tempi = false;
        }
    }
    ll temp = 0, ans = 0;
    if(start == -1)
        cout << 0 << endl;
    else{
    for (ll i = start; i < n;++i){
        if(arr[i] == 0)
            temp++;
        else{
            ans += temp;
            temp = 0;
        }
    }
    cout << ans << endl;
    }
  }
  return 0;
}
