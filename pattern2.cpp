#include <stdcpp.h>
using namespace std;

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

signed main()
{
    int n; cin >> n;
    pattern5(n);
}

