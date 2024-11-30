#include <stdcpp.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    int n , k;
    cin>> n >> k;
    vector<int> arr(n+1,0);
    for(int i=1;i<k;i++){
         arr[i]=i;
    }
    int x=k,i=k;
    while(i<=n && x<=n){
        arr[i++] = x;
        x=x+2;
    }
    x = k+1;
    while(i<=n){
        arr[i++]=x;
        x=x+2;
    }
    for(int i=1;i<=n;i++)
        cout<< arr[i]<<" ";
    cout<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}

