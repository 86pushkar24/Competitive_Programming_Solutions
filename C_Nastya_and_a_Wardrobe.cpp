#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
long long mod(long long n) {
    return (n % MOD + MOD) % MOD;
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long  long x, k;
    cin >> x >> k;

    if (x == 0) {
        cout << "0\n";
        return 0;
    }

    if (k == 0) {
        
        long long result = mod(2 * x);
        cout << result << '\n';
    } else {
        
        long long power = binpow(2,k+1,MOD);
        long long j=binpow(2,k,MOD);
        x=x%MOD;
        long long result =mod(mod(power * (x))-mod(j)+1);

        cout << result << '\n';
    }
    return 0;

}
