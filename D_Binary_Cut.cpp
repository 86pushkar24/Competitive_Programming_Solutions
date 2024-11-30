#include <stdcpp.h>
// #include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int res(1),check(0);
        for (int i = 0; i < s.size() - 1; i++) {
            if (check == 0 && s[i] == '0' && s[i + 1] == '1') {
                check = 1;
                continue;
            }
            if (s[i] != s[i + 1]) res++;
        }
        cout << res << endl;
    }

    return 0;
}
