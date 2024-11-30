// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    string s;cin >>s;
    int q; cin >> q;
    while (q--)
    {
        char c1;cin >> c1;
        char c2;cin >> c2;
        // cout << c1 << " " << c2;
        int count(0);
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == c1){
                for (int k = i; k < s.size(); k++)
                {
                    if (s[k] == c2)
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
        // vector <int> count(26,0);
		// for(char ch : s){
		// 	count[ch - 'a']++;
		// }
		// if((count[c1 - 'a'] > 0) && (count[c2 - 'a'] > 0)){
		// 	cout << count[c1 - 'a'] << endl;
		// }
		// else{
		// 	cout << 0 << endl;
		// }
    }
    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    // cin >> tc; 
    while (tc--){
    push();
    }
}

