#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> vv(26, 0);
    vector<char> ans(n + 1);
    auto q1 = [&](int x){
        cout << "? 1 " << x << endl;
        char y;
        cin >> y;
        return y;
    };
    auto q2 = [&](int l, int r){
        cout << "? 2 " << l << " " << r << endl;
        int y;
        cin >> y;
        return y;
    };
    ans[1] = q1(1);
    vv[ans[1] - 'a'] = 1;
    int cnt = 1;
    for (int i = 2; i <= n; i++){
        if (q2(1, i) > cnt){
            ans[i] = q1(i);
            vv[ans[i] - 'a'] = i;
            cnt++;
        }
        else{
            vector<int> v2;
            for (int j = 0; j < 26; j++)if (vv[j])v2.push_back(vv[j]);
            sort(v2.begin(), v2.end());
            int l = 0, r = v2.size() - 1;
            int pos = 0;
            auto chk = [&](int x) {
                return q2(v2[x] + 1, i) == v2.size() - x;
            };
            while (l <= r){
                int m = (l + r) / 2;
                if (chk(m)){
                    pos = m;
                    r = m - 1;
                }
                else l = m + 1;
            }
            ans[i] = ans[v2[pos]];
            vv[ans[i] - 'a'] = i;
        }
    }
    string fans;
    for (int i = 1; i <= n; i++)fans += ans[i];
    cout << "! " << fans << endl;
    return 0;
}
