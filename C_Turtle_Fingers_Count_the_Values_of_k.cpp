#include <iostream>
using namespace std;

#define i64 long long
#define idb double

int l, a, b;

int power(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}

int solve(int i) {
    int com = l / i;
    for (int j = 0;; j++) {
        if (power(a, j) > com)
            break;
        for (int k = 0;; k++) {
            if (power(b, k) > com)
                break;
            if (power(a, j) * power(b, k) == com) {
                return 1;
            }
        }
    }
    return 0;
}

void MainProgram() {
    cin >> a >> b >> l;
    int ans = 0;
    for (int i = 1; i * i <= l; i++) {
        if (l % i == 0) {
            ans += solve(i);
            if(i != l/i){
            	ans += solve(l / i);
            }
            //ans += solve(l / i);
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for (int it = 1; it <= tc; it++) {
        MainProgram();
    }
    return 0;
}
