#include <bits/stdc++.h>
using namespace std;
#define int long long
class SegmentTree {
private:
    int n;
    vector<int> segtree, arr;

public:
    SegmentTree(int n) {
        this->n = n;
        segtree.resize(4 * n + 1, LLONG_MIN);
    }

    void init(vector<int> &arr) {
        this->arr = arr;
        this->n = arr.size();
        segtree.resize(4 * n + 1, LLONG_MIN);
        build(1, 1, n);
    }

    int build(int x, int l, int r) {
        if (l == r)
            return segtree[x] = arr[l - 1];
        int mid = (l + r) / 2;
        return segtree[x] = max(build(2 * x, l, mid), build(2 * x + 1, mid + 1, r));
    }

    void updateVal(int x, int l, int r, int idx, int val) {
        if (l > idx || r < idx)
            return;
        if (l == r) {
            segtree[x] = val;
            return;
        }
        int mid = (l + r) / 2;
        updateVal(2 * x, l, mid, idx, val);
        updateVal(2 * x + 1, mid + 1, r, idx, val);
        segtree[x] = max(segtree[2 * x], segtree[2 * x + 1]);
    }

    void update(int idx, int val) {
        arr[idx - 1] += val;
        updateVal(1, 1, n, idx, arr[idx - 1]);
    }

    int cal(int x, int l, int r, int L, int R) {
        if (L <= l && R >= r)
            return segtree[x];
        if (L > r || R < l)
            return LLONG_MIN;
        int mid = (l + r) / 2;
        return max(cal(2 * x, l, mid, L, R), cal(2 * x + 1, mid + 1, r, L, R));
    }

    int query(int l, int r) {
        return l > r ? 0 : cal(1, 1, n, l, r);
    }
};

void push() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int &x : v)cin >> x;
    vector<int> pre(n,v[0]),suff(n,v[n-1]);
    for(int i=1;i<n;i++)pre[i]=pre[i-1]+v[i];
    for(int i=n-2;i>=0;i--)suff[i]=suff[i+1]+v[i];
    SegmentTree Pre(0),Suff(0);
    Pre.init(pre);
    Suff.init(suff);
    vector<int> right(n+1),left(n+1);
    stack<int> s;
    for(int i=n;i>=1;i--){
        while(!s.empty()&&v[s.top()-1]<=v[i-1])s.pop();
        right[i]=(s.empty()?n+1:s.top());
        s.push(i);
    }
    while(!s.empty())s.pop();
    for(int i=1;i<=n;i++){
        while(!s.empty()&&v[s.top()-1]<=v[i-1])s.pop();
        left[i]=(s.empty()?0:s.top());
        s.push(i);
    }
    for (int i=1;i<=n;i++){
        int x=(i+1>right[i]-1?0:Pre.query(i+1,right[i]-1)-pre[i-1]);
        int y=(left[i]+1>i-1?0:Suff.query(left[i]+1,i-1)-suff[i-1]);
        if(max(x,y)>0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

signed main() {
    int tc;
    cin >> tc;
    while (tc--)push();
    return 0;
}
