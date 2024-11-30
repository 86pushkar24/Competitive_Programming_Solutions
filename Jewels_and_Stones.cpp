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
    string s1; cin >> s1;
    string s2; cin >> s2;
    int arr[256] = {0};
	int idx,cnt(0);
	for(int i = 0;i < s1.size();i++){
	    idx = (int)(s1[i]);
	    arr[idx]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        idx = (int)(s2[i]);
        if(arr[idx] != 0){
            cnt++;
        }
    }
    cout << cnt << endl;
    
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

