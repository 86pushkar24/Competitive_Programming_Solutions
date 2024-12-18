#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;

        int c1 = 0, c2 = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s1[i] == '0' && s1[i] != s2[i])
            {
                c1++;
            }
            if (s2[i] == '0' && s2[i] != s1[i])
            {
                c2++;
            }
        }

        cout << max(c1, c2) << endl;
    }

    return 0;
}
