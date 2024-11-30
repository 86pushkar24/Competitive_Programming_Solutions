// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define all(v) v.begin(), v.end()
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    ll n;
    cin>>n;
    vector<ll>v1;
    ll sum = 0;
    ll maxi = 0;
    for(ll i=0;i<n;i++)
    {
    	ll n1;
    	cin>>n1;
    	v1.pb(n1);
    	sum += n1;
    	maxi = max(maxi,n1);
    }
    if(n>=4)
    {
        ll ans = maxi*n;
    	cout<<ans<<"\n";
    }
    else if(n==2)
    {
    	sum = max(sum,abs(v1[0]-v1[1])*2);
    	cout<<sum<<"\n";
    }
    else
    {
    	if(maxi==v1[0]||maxi==v1[2])
    	{
    		cout<<maxi*3<<"\n";
    	}
    	else
    	{
            ll val3 = abs(v1[0]-v1[2])*3;
            ll val4 = abs(v1[1]-v1[2]);
            sum = max(sum,val4*2+v1[0]);
            // cout<<sum<<" = sum\n";
            val4 = max(abs(val4-v1[0])*3,abs(val4-v1[0])*2+val4);
            ll val5 = abs(v1[1]-v1[0]);
            sum = max(sum,val5*2+v1[2]);
            val5 = max(abs(val5-v1[2])*3,val5+abs(val5-v1[2])*2);
            // cout<<sum<<" = sum\n";
            // cout<<val3<<" "<<val4<<" "<<val5<<"\n";
            sum = max(sum,val3);
            sum = max(sum,val4);
            sum = max(sum,val5);
            sum = max(sum,max(v1[0]*3,v1[2]*3));
            sum = max(sum,max((v1[1]-v1[0])*3,(v1[1]-v1[2])*3));
            cout<<sum<<"\n";
 
    		// sort(v1.begin(),v1.end());
    		// ll val1 = (maxi-v1[0])*2+v1[1];
    		// ll change = maxi-v1[0];
    		// ll val2 = change+abs(change-v1[1])*2;
    		// sum = max(sum,max(val1,val2));
            // sum = max(sum,val3);
            // sum = max(sum,val4);
    		// cout<<sum<<"\n";
    	}
    }
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    pre();
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}
