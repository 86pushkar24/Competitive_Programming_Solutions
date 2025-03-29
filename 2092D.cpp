#include <iostream>
#include <vector>
#include <string>
using namespace std;

char foIn(char a, char b)
{
    if ((a == 'L' && b == 'I') || (a == 'I' && b == 'L'))
        return 'T';
    if ((a == 'L' && b == 'T') || (a == 'T' && b == 'L'))
        return 'I';
    if ((a == 'I' && b == 'T') || (a == 'T' && b == 'I'))
        return 'L';
    return ' ';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int ln;
        cin >> ln;
        string st;
        cin >> st;

        int cl = 0, ci = 0, ct = 0;
        for (char ch : st)
        {
            if (ch == 'L')
                cl++;
            else if (ch == 'I')
                ci++;
            else if (ch == 'T')
                ct++;
        }

        auto isBl = [&]() -> bool
        {
            return (cl == ci && ci == ct);
        };

        if (isBl())
        {
            cout << 0 << "\n";
            continue;
        }

        if (ln == 1)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<char> vc(st.begin(), st.end());
        vector<int> op;

        int ol = 2 * ln;

        while (!isBl() && op.size() <= ol)
        {
            char ds;
            if (cl <= ci && cl <= ct)
                ds = 'L';
            else if (ci <= cl && ci <= ct)
                ds = 'I';
            else
                ds = 'T';

            bool ins = false;
            for (int i = 0; i < (int)vc.size() - 1; i++)
            {
                if (vc[i] != vc[i + 1])
                {
                    char in = foIn(vc[i], vc[i + 1]);
                    if (in == ds)
                    {
                        op.push_back(i + 1);
                        vc.insert(vc.begin() + i + 1, in);
                        if (in == 'L')
                            cl++;
                        else if (in == 'I')
                            ci++;
                        else if (in == 'T')
                            ct++;
                        ins = true;
                        break;
                    }
                }
            }
            if (!ins)
            {
                for (int i = 0; i < (int)vc.size() - 1; i++)
                {
                    if (vc[i] != vc[i + 1])
                    {
                        char in = foIn(vc[i], vc[i + 1]);
                        op.push_back(i + 1);
                        vc.insert(vc.begin() + i + 1, in);
                        if (in == 'L')
                            cl++;
                        else if (in == 'I')
                            ci++;
                        else if (in == 'T')
                            ct++;
                        ins = true;
                        break;
                    }
                }
            }
            if (!ins)
                break;
        }

        if (isBl())
        {
            cout << op.size() << "\n";
            for (int ps : op)
            {
                cout << ps << "\n";
            }
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
