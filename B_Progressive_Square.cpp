#include <stdcpp.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> a;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            a.push_back(x);
        }
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for(auto it : a){
        int val = it;
        vector<int> b;
        for(int i = 0; i < n; i++){
            b.push_back(val);
            int cur = val;
            for(int j = 1; j < n; j++){
                cur = cur + d;
                b.push_back(cur);
            }
            val = val + c;
        }
        sort(b.begin(), b.end());
        if(a == b){
            ans = 1;
        }
        break;
    }
    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
        solve();
    }
}
