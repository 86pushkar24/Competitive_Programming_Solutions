// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;

void push()
{
    int n;
    cin >> n;
    vi Alice(n + 1);
    vi Bob(n + 1), Charlie(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> Alice[i];
        sum += Alice[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> Bob[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> Charlie[i];
    }
    int target = (sum + 2) / 3;
    // one
    int la = -1, ra = -1, lc = -1, rc = -1, lb = -1, rb = -1;
    int A = 0, B = 0, C = 0;
    // alice first
    for (int i = 1; i <= n; i++)
    {
        if (A < target)
        {
            A += Alice[i];
            if (la == -1)
                la = i;
            ra = i;
        }
        else if (B < target)
        {
            B += Bob[i];
            if (lb == -1)
                lb = i;
            rb = i;
        }
        else
        {
            C += Charlie[i];
            if (lc == -1)
                lc = i;
            rc = i;
        }
    }
    if (A >= target && B >= target && C >= target)
    {
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        return;
    }
    A = 0;
    B = 0;
    C = 0;
    la = -1;
    ra = -1;
    lb = -1;
    rb = -1;
    lc = -1;
    rc = -1;
    // alice Charlie Bob
    for (int i = 1; i <= n; i++)
    {
        if (A < target)
        {
            A += Alice[i];
            if (la == -1)
                la = i;
            ra = i;
        }
        else if (C < target)
        {
            C += Charlie[i];
            if (lc == -1)
                lc = i;
            rc = i;
        }
        else
        {

            B += Bob[i];
            if (lb == -1)
                lb = i;
            rb = i;
        }
    }
    if (A >= target && B >= target && C >= target)
    {
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        return;
    }
    A = 0;
    B = 0;
    C = 0;
    la = -1;
    ra = -1;
    lb = -1;
    rb = -1;
    lc = -1;
    rc = -1;
    // Charlie Alice Bob
    for (int i = 1; i <= n; i++)
    {
        if (C < target)
        {
            C += Charlie[i];
            if (lc == -1)
                lc = i;
            rc = i;
        }
        else if (A < target)
        {
            A += Alice[i];
            if (la == -1)
                la = i;
            ra = i;
        }
        else
        {

            B += Bob[i];
            if (lb == -1)
                lb = i;
            rb = i;
        }
    }
    if (A >= target && B >= target && C >= target)
    {
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        return;
    }
    A = 0;
    B = 0;
    C = 0;
    la = -1;
    ra = -1;
    lb = -1;
    rb = -1;
    lc = -1;
    rc = -1;
    // charlie Bob Alice
    for (int i = 1; i <= n; i++)
    {
        if (C < target)
        {
            C += Charlie[i];
            if (lc == -1)
                lc = i;
            rc = i;
        }
        else if (B < target)
        {
            B += Bob[i];
            if (lb == -1)
                lb = i;
            rb = i;
        }
        else
        {
            A += Alice[i];
            if (la == -1)
                la = i;
            ra = i;
        }
    }
    if (A >= target && B >= target && C >= target)
    {
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        return;
    }
    A = 0;
    B = 0;
    C = 0;
    la = -1;
    ra = -1;
    lb = -1;
    rb = -1;
    lc = -1;
    rc = -1;
    // Bob Alice Charlie
    for (int i = 1; i <= n; i++)
    {
        if (B < target)
        {
            B += Bob[i];
            if (lb == -1)
                lb = i;
            rb = i;
        }
        else if (A < target)
        {
            A += Alice[i];
            if (la == -1)
                la = i;
            ra = i;
        }
        else
        {
            C += Charlie[i];
            if (lc == -1)
                lc = i;
            rc = i;
        }
    }
    if (A >= target && B >= target && C >= target)
    {
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        return;
    }
    A = 0;
    B = 0;
    C = 0;
    la = -1;
    ra = -1;
    lb = -1;
    rb = -1;
    lc = -1;
    rc = -1;
    // bob Charlie Alice
    for (int i = 1; i <= n; i++)
    {
        if (B < target)
        {
            B += Bob[i];
            if (lb == -1)
                lb = i;
            rb = i;
        }
        else if (C < target)
        {
            C += Charlie[i];
            if (lc == -1)
                lc = i;
            rc = i;
        }
        else
        {
            A += Alice[i];
            if (la == -1)
                la = i;
            ra = i;
        }
    }
    if (A >= target && B >= target && C >= target)
    {
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
        return;
    }
    A = 0;
    B = 0;
    C = 0;
    la = -1;
    ra = -1;
    lb = -1;
    rb = -1;
    lc = -1;
    rc = -1;
    cout << -1 << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
}
