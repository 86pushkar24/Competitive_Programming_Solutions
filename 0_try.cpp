
#include "bits/stdc++.h"
using namespace std;

// Common Mistakes:
// 1. Use sqrtl() instead of sqrt() for long long
// 2. if a[i] goes to 10^9, you only need to check for primes till sqrt(10^9) i.e. 31623
// 3. GCD of |x-y|?
// 4. should pairity of x and y be equal?
// 5. Huffman Coding? Merging 2 smallest elements?
// 6. Coordinate Compression? 
// 7. Min/Max Spanning Tree.
// 8. Topo sort ? if there is something related to relative ordering.

void sol1(){
    string s;
    cin>>s;
    int n=s.size();
    s[n-2]='i';
    s[n-1]=' ';
    cout<<s<<endl;
}
void sol2(){
    string s;
    cin>>s;
    int n=s.size();
    bool flag=false;
    for(int i = 0, j = 1; (i < n - 1) && (j < n);){
        if(s[i]==s[j]){
            flag=true;
            i++;
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    if(flag)cout<<1<<endl;
    else cout<<n<<endl;
}
void sol3(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    vector<int> c = a;
    sort(c.begin(), c.end());
    if (c == a)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i(n - 1); i >= 1; i--)
    {
        if (a[i - 1] > a[i])
        {
            a[i - 1] = b[0] - a[i - 1];
            if (a[i - 1] > a[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
void sol4(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    vector<int> c = a;
    sort(c.begin(), c.end());
    if (c == a)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i(n - 1); i >= 1; i--)
    {
        if (a[i - 1] > a[i])
        {
            int k = lower_bound(b.begin(),b.end(),a[i-1])-b.begin();
            a[i-1]=b[k]-a[i-1];
            if (a[i - 1] > a[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
void sol5(){
    int n, m;
    cin >> n >> m; 
    vector<vector<int>> arrays(n, vector<int>(m));
    for (auto &row : arrays)for (auto &elem : row)cin >> elem;
    sort(arrays.begin(), arrays.end(), [&](const vector<int> &a, const vector<int> &b) {
        return accumulate(a.begin(), a.end(), 0) > accumulate(b.begin(), b.end(), 0);
    });
    vector<int> ans;
    for (const auto &row : arrays)ans.insert(ans.end(), row.begin(), row.end());
    int result = 0, s = 0;
    for (const auto &val : ans) {
        s += val;
        result += s;
    }
    cout << result << endl;
}
void sol6(){
    
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t=1;
    cin>>t;
    while(t--){
        sol5();
    }

    return 0;
}
