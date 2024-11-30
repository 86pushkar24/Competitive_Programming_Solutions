#include <stdcpp.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a, int b)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

string intToBin(int n)
{
    string x = "";
    while (n != 0)
    {
        if (n & 1)
        {
            x += '1';
        }
        else
        {
            x += '0';
        }
        n >>= 1;
    }
    reverse(x.begin(), x.end());
    return x;
}

void clear()
{
    int x;
    cin >> x;
    string binStr = intToBin(x);
    string ppl = "11";
    int pnr = 0;
    int plc = 0;
    for (int i = 0; i < binStr.length(); i++)
    {
        if (binStr[i] == ppl[pnr])
        {
            pnr++;
            if (pnr == 2)
            {
                plc = i + 1;
                break;
            }
        }
    }
    if (pnr <= 1)
    {
        cout << 1 << endl;
        return;
    }

    int ct = 0;
    for (int i = plc; i < binStr.length(); i++)
    {
        if (binStr[i] == '0')
        {
            ct++;
        }
    }
    cout << power(2, ct) << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        clear();
    }

    return 0;
}
