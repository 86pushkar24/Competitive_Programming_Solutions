#include <bits/stdc++.h>
using namespace std;

struct Node {
    int maxi, mini, val;
    Node(int x) : maxi(x), mini(x), val(0) {}
    Node() : maxi(0), mini(0), val(0) {}
};

class SegmentTree {
public:
    int n;
    vector<Node> A, st;

    SegmentTree(const vector<int>& initialA) {
        n = initialA.size();
        A.resize(n);
        st.resize(4 * n + 10);
        for (int i = 0; i < n; i++) {
            A[i] = Node(initialA[i]);
        }
        build(1, 0, n - 1);
    }

    void update(int pos, int val) {
        update(1, 0, n - 1, pos, val);
    }

    int query() {
        return st[1].val;
    }

private:
    int l(int p) { return p << 1; }
    int r(int p) { return (p << 1) + 1; }

    Node conquer(Node a, Node b) {
        Node c;
        c.maxi = max(a.maxi, b.maxi);
        c.mini = min(a.mini, b.mini);
        c.val = max({a.val, b.val, b.maxi - a.mini});
        return c;
    }

    void build(int p, int L, int R) {
        if (L == R) {
            st[p] = A[L];
        } else {
            int m = (L + R) / 2;
            build(l(p), L, m);
            build(r(p), m + 1, R);
            st[p] = conquer(st[l(p)], st[r(p)]);
        }
    }

    void update(int p, int L, int R, int pos, int val) {
        if (pos < L || pos > R) return;
        if (L == R) {
            A[L] = st[p] = Node(val);
        } else {
            int m = (L + R) / 2;
            update(l(p), L, m, pos, val);
            update(r(p), m + 1, R, pos, val);
            st[p] = conquer(st[l(p)], st[r(p)]);
        }
    }
};

class SegmentTree2 {
public:
    int n;
    vector<Node> A, st;

    SegmentTree2(const vector<int>& initialA) {
        n = initialA.size();
        A.resize(n);
        st.resize(4 * n + 10);
        for (int i = 0; i < n; i++) {
            A[i] = Node(initialA[i]);
        }
        build(1, 0, n - 1);
    }

    void update(int pos, int val) {
        update(1, 0, n - 1, pos, val);
    }

    int query() {
        return st[1].val;
    }

private:
    int l(int p) { return p << 1; }
    int r(int p) { return (p << 1) + 1; }

    Node conquer(Node a, Node b) {
        Node c;
        c.maxi = max(a.maxi, b.maxi);
        c.mini = min(a.mini, b.mini);
        c.val = max({a.val, b.val, a.maxi - b.mini});
        return c;
    }

    void build(int p, int L, int R) {
        if (L == R) {
            st[p] = A[L];
        } else {
            int m = (L + R) / 2;
            build(l(p), L, m);
            build(r(p), m + 1, R);
            st[p] = conquer(st[l(p)], st[r(p)]);
        }
    }

    void update(int p, int L, int R, int pos, int val) {
        if (pos < L || pos > R) return;
        if (L == R) {
            A[L] = st[p] = Node(val);
        } else {
            int m = (L + R) / 2;
            update(l(p), L, m, pos, val);
            update(r(p), m + 1, R, pos, val);
            st[p] = conquer(st[l(p)], st[r(p)]);
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int> v(n),v1(n);
        for(int i=0;i<n;i++){
            v[i]=a[i]-i;
            v1[i]=a[i]+i;
        }
        SegmentTree st(v);
        SegmentTree2 st2(v1);
        cout<<max(st.query(),st2.query())<<endl;
        while(q--){
            int pos,val;
            cin>>pos>>val;
            pos--;
            st.update(pos,val-pos);
            st2.update(pos,val+pos);
            cout<<max(st.query(),st2.query())<<endl;
        }
    }
}
