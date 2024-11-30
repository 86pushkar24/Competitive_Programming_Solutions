#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    string str;
        int n;
        cin >> n;
        cin.ignore();
        getline(cin, str);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == '*' && str[i+1] == '*') break;
            else{
                if (str[i] == '@') count++;
            }
        }
        cout << count << endl;
    }


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}

