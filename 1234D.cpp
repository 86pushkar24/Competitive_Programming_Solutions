/* Author: goats_9 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template <class T>
class SegTree
{
    int sz;
    vector<T> t;
    T ID;

    T combine(T a, T b) { return a | b; }

    void build(string &s, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < (int)s.size())
                t[x] |= 1 << (s[lx] - 'a');
            return;
        }
        int m = (lx + rx) >> 1;
        build(s, 2 * x + 1, lx, m);
        build(s, 2 * x + 2, m, rx);
        t[x] = combine(t[2 * x + 1], t[2 * x + 2]);
    }

    void set(int i, char c, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            t[x] = 1 << (c - 'a');
            return;
        }
        int m = (lx + rx) >> 1;
        if (i < m)
            set(i, c, 2 * x + 1, lx, m);
        else
            set(i, c, 2 * x + 2, m, rx);
        t[x] = combine(t[2 * x + 1], t[2 * x + 2]);
    }

    T query(int l, int r, int x, int lx, int rx)
    {
        if (l >= rx || lx >= r)
            return ID;
        if (lx >= l && rx <= r)
            return t[x];
        int m = (lx + rx) >> 1;
        return combine(
            query(l, r, 2 * x + 1, lx, m),
            query(l, r, 2 * x + 2, m, rx));
    }

public:
    SegTree(string &s, T id = {}) : ID(id)
    {
        for (sz = 1; sz < (int)s.size(); sz <<= 1)
            ;
        t.assign(2 * sz, ID);
        build(s, 0, 0, sz);
    }

    void set(int i, char c) { set(i, c, 0, 0, sz); }
    T query(int l, int r) { return query(l, r, 0, 0, sz); }
};

int main(){
    string s;
    cin >> s;
    SegTree<int> st(s);
    int q;
    cin >> q;
    while (q--){
        int op;
        cin >> op;
        if (op == 1){
            int pos;
            char c;
            cin >> pos >> c;
            st.set(--pos, c);
        }
        else{
            int l, r;
            cin >> l >> r;
            cout << __builtin_popcount(st.query(--l, r)) << '\n';
        }
    }
    return 0;
}