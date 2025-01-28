#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;
int l[N], r[N];
bool cmp(int i, int j){
    if (l[i] == l[j])
        return r[i] > r[j];
    return l[i] < l[j];
}
bool cmp2(int i, int j){
    if (r[i] == r[j])
        return l[i] < l[j];
    return r[i] > r[j];
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++){
            cin >> l[i] >> r[i];
            v.push_back(i);
        }
        sort(v.begin(), v.end(), cmp);
        int ans[n] = {};
        set<int> st;
        for (int i = 0; i < n; i++){
            int j = v[i];
            if (i < n - 1){
                if (l[v[i + 1]] == l[v[i]] && r[v[i + 1]] == r[v[i]]){
                    st.insert(r[j]);
                    continue;
                }
            }
            auto it = st.lower_bound(r[j]);
            if (it != st.end())
                ans[j] = *st.lower_bound(r[j]) - r[j];
            st.insert(r[j]);
        }
        sort(v.begin(), v.end(), cmp2);
        st.clear();
        for (int i = 0; i < n; i++){
            int j = v[i];
            if (i < n - 1){
                if (l[v[i + 1]] == l[v[i]] && r[v[i + 1]] == r[v[i]]){
                    st.insert(l[j]);
                    continue;
                }
            }
            auto it = st.upper_bound(l[j]);
            if (it != st.begin()){
                it--;
                ans[j] += l[j] - *it;
            }
            st.insert(l[j]);
        }
        for (int i = 0; i < n; i++)cout << ans[i] << "\n";
        cout << '\n';
    }
}
