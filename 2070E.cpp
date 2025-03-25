#include "bits/stdc++.h"
using namespace std;
#define int long long
struct FenwickTree {
    int n;
    vector<int> a;
    FenwickTree(int n_) {
        n = n_;
        a.assign(n + 1, 0);
    }
    void add(int x, int v) {
        for (int i = x; i <= n; i += i & -i) {
            a[i] += v;
        }
    }
    int query(int x) {
        int ans = 0;
        for (int i = x; i > 0; i -= i & -i) {
            ans += a[i];
        }
        return ans;
    }
    int query(int l, int r) {
        return query(r) - query(l - 1);
    }
};

const int N=3e5+5;
int pre[N];
signed main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    s=' '+s;
    long long ans=0;
    for(int i=1;i<=n;i++)pre[i]=pre[i-1]+(s[i]=='1');
    FenwickTree tr(6*n+1);
    map<int,int> mp;
    mp[0]++;
    tr.add(2*n,1);
    for(int i=1;i<=n;i++){
        ans+=tr.query(4*pre[i]+2*n-i+2,5*n)+mp[4*pre[i]-i-1];
        tr.add(4*pre[i]+2*n-i,1);
        mp[4*pre[i]-i]++;
    }
    cout<<ans;
}
