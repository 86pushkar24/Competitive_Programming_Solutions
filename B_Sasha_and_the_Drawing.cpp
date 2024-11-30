#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    int n,m;
        cin >> n >> m;
        if(m==(4*n-2)){
        cout<<(m/2)+1<<endl;
    }
    else{
        if(m%2==0){
            cout<<m/2<<endl;
        }
        else{
            cout<<(m/2)+1<<endl;
        }
    }

}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}

