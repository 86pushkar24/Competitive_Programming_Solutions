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
    int n; cin>>n;
    priority_queue<int> pq;
    vector<int> v;
    map<int, int> mp;
    vector<int> a(n); for(int i = 0; i < n; i++) { cin>>a[i]; pq.push(a[i]); }
    while(!pq.empty()){
        int t=pq.top(), b=0; pq.pop();
        if(mp.size()){
            if(mp.count(t+1)) { mp[t]++, mp[t+1]--, b=1; if(mp[t+1]==0) mp.erase(t+1); }
            if(b) continue;
        }
        if(!b) mp[t]++;;
    }
    int ans=0;
    for(auto i:mp) ans+=i.second; 
    cout<<ans<<endl;
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

