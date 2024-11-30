#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    n = n/a + (n%a != 0);
    m = m/a + (m%a != 0);
    cout << n*m;
    return 0;
}
