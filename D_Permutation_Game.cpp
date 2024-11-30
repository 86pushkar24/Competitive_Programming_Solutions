// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n, k, pa, pb;
    cin >> n >> k >> pa >> pb;
    vector<int> v(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        cin >> v[i];
    }
    vector<int> a(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    vector<int> vis1(n + 1, 0), vis2(n + 1, 0);
    int ansb = 0, ansa = 0, currb = 0, curra = 0;
    int currposa = pa, currposb = pb;
    // vis1[]
    int N = k;
    for (int i = 0; i < min(N, k); i++)
    {
        int left = (min(N, k) - i - 1);
        curra += a[currposa];
        currb += a[currposb];
        vis1[currposa] = 1;
        vis2[currposb] = 1;
        ansa = max(ansa, curra + (left * a[currposa]));
        ansb = max(ansb, currb + (left * a[currposb]));
        currposa = v[currposa];
        currposb = v[currposb];
        if (vis1[currposa] && vis2[currposb])
        {
            break;
        }
    }
    if (ansa == ansb)
    {
        cout << "Draw" << endl;
    }
    else if (ansa > ansb)
    {
        cout << "Bodya" << endl;
    }
    else
    {
        cout << "Sasha" << endl;
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

