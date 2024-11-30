// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin >> n;
    string strA, strB;
    cin >> strA >> strB;
    queue<int> que;
    int curr = -1;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (strA[i] == strB[i])
        {
            if (strA[i] == 'b')
            {
                curr = i;
            }
        }
        else if (strA[i] == 'a' && strB[i] == 'c')
        {
            que.push(i);
        }
        else if (strA[i] == 'c' && strB[i] == 'a')
        {
            if (que.size() != 0 && que.front() < curr)
            {
                que.pop();
            }
            else
            {
                cout << "No" << endl;
                flag = false;
                break;
            }
        }
        else
        {
            cout << "No" << endl;
            flag = false;
            break;
        }
    }
    if (flag == true && que.size() > 0)
    {
        cout << "No" << endl;
    }
    else if (flag)
    {
        cout << "Yes" << endl;
    }
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
