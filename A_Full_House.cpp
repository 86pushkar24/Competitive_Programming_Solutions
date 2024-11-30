// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    // int arr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // set<int> stt;
    // for (int i = 0; i < 5; i++)
    // {
    //     stt.insert(arr[i]);
    // }
    // if ((stt.size() == 2) || (stt.size() == 1))  // 5 5 5 5 1
    // { 
    //     cout << "Yes";
    // }
    // else
    // {
    //     cout << "No";
    // }
    int arr[14];
    for (int i = 0; i < 14; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        arr[n]++;
    }
    bool cnt1(0),cnt2(0);
    for (int i = 0; i < 14; i++)
    {
        if (arr[i] == 2)
        {
            cnt1 = 1;
        }
        if (arr[i] == 3)
        {
            cnt2 = 1;
        }
    }
    if(cnt1 == 1 && cnt2 == 1){
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        push();
    }
}
