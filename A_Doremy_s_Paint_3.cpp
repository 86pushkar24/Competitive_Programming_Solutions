// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        map<int, int> m;
        for(int i=0; i<n; i++) {
            m[arr[i]] ++;
        }
        bool flag = true;
        if(m.size() == 1) cout<<"Yes"<<endl;
        else if(n%2 == 0 && m.size()==2) {
            for( auto it: m) {
                if(it.second != n/2) {
                    flag = false;
                    break;
                }
            }
            if(flag) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else if(n%2 != 0 && m.size()==2) {
            auto f = m.begin();
            int fir = f->second;
            int last = (++f)->second;
            if((fir == n/2 && last == (n+1)/2) || (fir == (n+1)/2 && last == n/2)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        } 
        else cout<<"No"<<endl;

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
