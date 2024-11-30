#include <iostream>
using namespace std;

int main() {
    long long n1 = 0, n2 = 1, n3, i, n;
    cin >> n;

    if (n == 1) {
        cout << "0" << endl;
    } else if (n == 2) {
        cout << "1" << endl;
    } else {
        for (i = 2; i < n; ++i) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        cout << n3 << endl;
    }

    return 0;
}

