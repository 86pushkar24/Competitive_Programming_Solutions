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
    int s,n,flag(1);cin>>s>>n;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
      int x,y;
      cin>>x>>y;
      v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(s>v[i].first)s+=v[i].second;
        else
        {
          flag=-1;
          break;
        }
    }
    if(flag==-1) cout<<"NO";
    else cout<<"YES";
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

