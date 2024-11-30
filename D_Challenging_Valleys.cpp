// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define forn(i,e) for(int i = 0; i < e; i++)
#define forsn(i,s,e) for(int i = s; i < e; i++)

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n; cin>>n;
    vector<int> a(n);
    forn(i, n) cin>>a[i];
    if(n==1) { cout<<"YES"<<endl; return; }
    vector<int> b;
    forn(i, n) {
        if(i==n) { b.push_back(a[i]); break; }
        if(a[i]==a[i+1]) continue;
        else b.push_back(a[i]);
    }
    int c=0; n=b.size();
    if(n==1) { cout<<"YES"<<endl; return; }
    // if(n==2) { cout<<"YES"<<endl; return; }
    if(b[0]<b[1]) c++;
    if(b[n-1]<b[n-2]) { c++; }
    forsn(i, 1, b.size()-1){
        if(b[i]<b[i-1] && b[i]<b[i+1]) { c++; }
    }
    cout<<(c==1?"YES":"NO")<<endl;
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

