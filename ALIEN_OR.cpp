// @prefix cpp
// @description 

#include <stdcpp.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int num, len;
    cin >> num >> len;
    string bin[num];
    set<int> idx;
    for(int i = 0; i < num; i++){
        cin >> bin[i];
        int cnt(0), lst(0);
        for(int j = 0; j < len; j++){
            if(bin[i][j] == '1'){
                cnt++;
                lst = j;
            }
        }
        if(cnt == 1) idx.insert(lst);
    }
    if(idx.size() == len) cout << "YES" << endl;
    else cout << "NO" << endl;
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

