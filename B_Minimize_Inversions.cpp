#include <stdcpp.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    int n;
    cin>>n;
    pair<int, int> a[n];
    for (int i = 0;i<n;i++)cin>>a[i].first;
    for(int i = 0;i<n;i++)cin>>a[i].second;
    sort(a, a+n);
    for (int i = 0; i < n; i++)
    cout << a[i].first << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
    cout << a[i].second << " ";
    cout << endl;
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}

