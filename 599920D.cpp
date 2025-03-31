#include "bits/stdc++.h"
using namespace std;

int k;

struct Node
{
    int ans = 0;
    vector<int> cnt, left, right;

    Node()
    {
        cnt.resize(51);
        left.resize(51);
        right.resize(51);
    }
};

struct SegTree
{
    int size;
    vector<Node> tree;

    void init(int n)
    {
        size = n;
        tree.resize(4 * size);
    }

    Node combine(Node n1, Node n2)
    {
        Node n3;
        for (int i = 1; i <= 50; ++i)
        {
            n3.cnt[i] = n2.cnt[i] + n1.cnt[i];
        }
        int sum = 0;
        for (int i = 1; i <= 50; ++i)
        {
            n3.left[i] = n2.left[i] + n1.left[i] + sum * n2.cnt[i];
            sum += n1.cnt[i];
        }
        sum = 0;
        for (int i = k; i <= 50; ++i)
        {
            sum += n2.cnt[i - k];
            n3.right[i] = n1.right[i] + n2.right[i] + sum * n1.cnt[i];
        }
        n3.ans = n1.ans + n2.ans;

        int sum1 = 0, sum2 = 0;
        sum = 0;
        for (int i = k; i <= 50; ++i)
        {
            sum += n2.cnt[i - k];
            sum1 += n1.left[i] * sum;
        }

        sum = 0;
        for (int i = 1; i <= 50; i++)
        {
            sum2 += sum * n2.right[i];
            sum += n1.cnt[i];
        }

        n3.ans += sum1 + sum2;

        return n3;
    }

    void build(int id, int l, int r, vector<int> &a)
    {
        if (l == r)
        {
            tree[id].cnt[a[l]]++;
            return;
        }

        int mid = (l + r) / 2;
        build(2 * id, l, mid, a);
        build(2 * id + 1, mid + 1, r, a);

        tree[id] = combine(tree[2 * id], tree[2 * id + 1]);
    }

    Node query(int id, int l, int r, int lq, int rq)
    {
        if (rq < l || lq > r)
        {
            return Node();
        }

        if (lq <= l && rq >= r)
        {
            return tree[id];
        }

        int mid = (l + r) / 2;
        return combine(query(2 * id, l, mid, lq, rq), query(2 * id + 1, mid + 1, r, lq, rq));
    }

    void update(int id, int pos, int val1, int val2, int l, int r)
    {
        if (l == r)
        {
            tree[id].cnt[val1]--;
            tree[id].cnt[val2]++;
            return;
        }

        int mid = (l + r) / 2;
        if (pos <= mid)
        {
            update(2 * id, pos, val1, val2, l, mid);
        }
        else
        {
            update(2 * id + 1, pos, val1, val2, mid + 1, r);
        }

        tree[id] = combine(tree[2 * id], tree[2 * id + 1]);
    }
};

int main(){
    int n,m;
    cin>>n>>m>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    SegTree st;
    st.init(n);
    st.build(1,0,n-1,a);
    while(m--){
        int t,n1,n2;
        cin>>t>>n1>>n2;
        if(t==1){
            n1--,n2--;
            Node res=st.query(1,0,n-1,n1,n2);
            cout<<res.ans<<endl;
        }
        else{
            n1--;
            st.update(1,n1,a[n1],n2,0,n-1);
            a[n1]=n2;
        }
    }
    return 0;
}
