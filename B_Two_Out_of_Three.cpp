// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;
#define rall(x) (x).rbegin(),(x).rend()
#define rip(i,s,e) for (int i = s; i < e; i++)
#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define input(v,SIZE) vector < int > v; for(int z = 0; z < SIZE ; z++){int x; cin >> x; v.push_back(x);}

void push(){
	int n;
	cin >>n;
	input(v,n);
	vector < int > ans(n,1);
	map < int , vector < int > > mp;
	rip(i,0,n) mp[v[i]].push_back(i);
	vector < pair < int , vector < int > > > vp;
 
	for(auto i : mp) vp.push_back({i.second.size(),i.second});
	sort(rall(vp));
	// cout<<vp[0].first<<Endl;
	if(vp.size()>1 && vp[1].first >=2){
		ans[vp[0].second[0]] = 1;
		rip(i,1,vp[0].first){
			ans[vp[0].second[i]] = 2;
		}
		ans[vp[1].second[0]] = 2;
		rip(i,1,vp[1].first){
			ans[vp[1].second[i]] = 3;
		}
	}	
	else{
		cout<<-1<<endl;
		return;
	}
	for(auto i : ans) cout<<i<<" ";
	cout<<endl;
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
