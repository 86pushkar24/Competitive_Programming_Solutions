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
    int key;
    cin >> key;
    int i = 2;
    int answer = pow(2, i) - 1;
    while (key >= answer)
    {
        answer = pow(2, i) - 1;
        if (key % answer == 0)
        {
            cout << key / answer << endl;
            return ;
        }
        i++;
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
