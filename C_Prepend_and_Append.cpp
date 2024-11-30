// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>

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
    string str;
    cin >> str;
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (j > i && i < n && j >= 0)
    {
        if (str[i] != str[j])
        {
            count += 2;
            i++;
            j--;
        }
        else
        {
            break;
        }
    }
    cout << n - count << endl;
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
