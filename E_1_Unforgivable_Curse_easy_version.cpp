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
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    if(n==2||n==3)
    {
        if(s1==s2)
        {
            cout<<"YES\n";
            return;
        }
        else
        {
            cout<<"NO\n";
            return;
        }
    }
    else if(n==4)
    {
        if(s1==s2)
        {
            cout<<"YES\n";
            return;
        }
        swap(s1[0],s1[3]);
        if(s1==s2)
        {
            cout<<"YES\n";
            return;
        }
        cout<<"NO\n";
        return;
    }
    else if(n==5)
    {
        if(s1[2]!=s2[2])
        {
            cout<<"NO\n";
            return;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        return;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
    push();
    }
}

