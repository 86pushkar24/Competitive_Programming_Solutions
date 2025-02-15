#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string s;
        cin >> s;
        n = s.size();
        bool ok = false;
        for (int i = 0; i < n; i++){
            if (s[i] != s[n - 1 - i]){
                for (int j = i; j < n; j += 2){
                    if (s[j] != s[j + 1]){
                        ok = true;
                    }
                }
                break;
            }
        }
        cout << (ok ? "Alice" : "Draw") << "\n";
    }
}
