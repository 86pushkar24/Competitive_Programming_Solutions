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

void push(){
    int h,w;
    cin >> h >> w;
    int a[h][w],b[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            string s; cin >> s;
            if (s[j] == '.')
            {
                a[h][w] = '1';
            }
            else
            {
                a[h][w] == '0';
            }
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            string s; cin >> s;
            if (s[j] == '.')
            {
                b[h][w] = '1';
            }
            else
            {
                b[h][w] == '0';
            }
        }
    }
    for (int s = 0; s < h; s++)
    {
        for (int t = 0; t < w; t++)
        {
            bool done = true;
            for (int i = 0; i < h; i++)
            {
                for (int j = 0; j < w; j++)
                {
                    if (a[i][j] != b[(i+s)%h][(j+s)%w])
                    {
                        done = false;
                        break;
                    }
                }
            if(!done) break;
            }
        if(done) cout << "Yes";
        }
    }
    cout << "No";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    // cin >> tc; 
    while (tc--){
    push();
    }
}

