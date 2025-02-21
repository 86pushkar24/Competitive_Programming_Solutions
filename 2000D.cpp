#include "bits/stdc++.h"
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<long long> s(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> s[i];
            s[i] += s[i - 1];
        }
        string t;
        cin >> t;
        t = " " + t;
        long long ans = 0;
        for(int i = 1, j = n; i < j; i++, j--){
            while(i < j && t[i] != 'L')
                i++;
            while(i < j && t[j] != 'R')
                j--;
            if(i >= j)
                break;
            ans += s[j] - s[i - 1];
        }
        cout << ans << '\n';
    }
}
