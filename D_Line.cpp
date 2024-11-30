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

void push(){
    int n = 0, m = 0, k = 0, ans = 0, cnt = 0, sum = 0;
    cin >> n;
    string str;
    cin >> str;
    int initial = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'L')
            initial += i;
        else
            initial += n - i - 1;
    }
    vector<int> vl, vr;
    for (int i = 0; i < n / 2; i++)
    {
        vl.push_back(str[i]);
        vr.push_back(str[n - i - 1]);
    }
    vector<int> ansk;
    for (int i = 0; i < n / 2; i++)
    {
        if (vl[i] == 'L')
        {
            initial -= i;
            initial += n - i - 1;
            ansk.push_back(initial);
        }
        if (vr[i] == 'R')
        {
            initial -= i;
            initial += n - i - 1;
            ansk.push_back(initial);
        }
    }
    // debug(ansk);
    for (int i = 0; i < ansk.size(); i++)
    {
        cout << ansk[i] << " ";
    }
    if (ansk.size() == 0)
    {
        for (int i = 0; i < n - ansk.size(); i++)
            cout << initial << " ";
        return;
    }
    for (int i = 0; i < n - ansk.size(); i++)
        cout << ansk[ansk.size() - 1] << " ";
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
    push();
    cout << endl;
    }
}

