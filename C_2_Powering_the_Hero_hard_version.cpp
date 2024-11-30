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

#define rip(i,s,e) for (int i = s; i < e; i++)
#define input(v,SIZE) vector < int > v; for(int z = 0; z < SIZE ; z++){int x; cin >> x; v.push_back(x);}
 
void push(){
    int n ;
    cin >> n;
    input(v,n);
    multiset < int > st;
    int cnt = 0 ;
    rip(i,0,n){
        if(v[i]==0){
            if(st.size()){
                auto x = (*st.rbegin());
                cnt += x;
                st.erase(st.lower_bound(x));
            }
        }
        else st.insert(v[i]);
    }
    cout<<cnt<<endl;
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

