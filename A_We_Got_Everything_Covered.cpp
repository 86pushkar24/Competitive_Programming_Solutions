 #include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear()
{
    int a, b;
    cin >> a >> b;
    string s1 = "";
    while (a--)
    {
        int i = 0;
        while (i < b){
            s1 += char(i+'a');
            i++;
        }
    }
    cout<<s1<<endl;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while (tc--) {
        clear();
    }

    return 0;
}


