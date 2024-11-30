// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long int
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isPrime(int n)
{
 int k = sqrt(n);
	for (int i = 2; i <= k; i++)
		if (n % i == 0)
			return false;
 
	return true;
}
 
void push() {
    int n,x,X,i,f=0;
    cin>>n;
    while(n--)
    {
        cin>>X;
        if(X==1){
             cout<<"NO"<<endl;}
        else  if ((ceil(sqrt(X)) == floor(sqrt(X))) && isPrime(sqrt(X)))
        {    
           cout << "YES\n";
        }
        else{
            cout<<"NO"<<endl;}
    }
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int tc = 1; 
    // cin >> tc; 
    while (tc--){
    push();
    }
}

