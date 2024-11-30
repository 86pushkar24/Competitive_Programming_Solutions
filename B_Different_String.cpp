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
    string s;
    cin >> s;
    int i = 0;
    int j = s.length() - 1;
    unordered_set<char> h1;
    for (int k = 0; k < s.length(); k++)
    {
        h1.insert(s[k]);
    }
    if (h1.size() == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        bool changed = false;
        while (j > i)
        {
            if (s[j] != s[i])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                j--;
                i++;
                break;
            }
            else
            {
                i++;
            }
        }
        cout << s << endl;
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

