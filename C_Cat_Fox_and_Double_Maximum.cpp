// #include "bits/stdc++.h"
#include "stdcpp.h"
using namespace std;

#define int long long
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vb vector<bool>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int> 
#define pb push_back
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define cou(a) {cout<<a<<"\n";}
#define cin(a) int n; cin>>n; int a[n]; for (int i = 0; i < n; i++) {cin>>a[i];}

const int MOD = 1e9 + 7;

// int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
// int lcm (int a, int b) { return (a*b) / gcd(a, b);}
// int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}

// Pushkar Gupta's Solution Start's Here
void push(){
    cin(a)
    vi q(n);
    vector< pair<int,int> > arr;
    vector< pair<int,int> > arr1;
    int sum1(0),sum2(0);
    for(int i=1;i<n-1;i++){
        if(i%2==1){
            sum1+=a[i];
            arr.emplace_back(a[i],i);
        }
        else{
            sum2+=a[i];
            arr1.emplace_back(a[i],i);
        }
    }
    sort(all(arr));
    sort(all(arr1));
//    if(sum1>sum2){
//        int ans=n;
//        for(auto & i : arr){
//            q[i.second]=ans;
//            ans--;
//        }
//        arr1.emplace_back(a[0],0);
//        arr1.emplace_back(a[n-1],n-1);
//        sort(all(arr1));
//        for(auto & i : arr1){
//            q[i.second]=ans;
//            ans--;
//        }
//    }
//    else if(sum1==sum2){
        if(arr[0]>arr1[0]){
            int ans=n;
            for(auto & i : arr){
                q[i.second]=ans;
                ans--;
            }
            arr1.emplace_back(a[0],0);
            arr1.emplace_back(a[n-1],n-1);
            sort(all(arr1));
            for(auto & i : arr1){
                q[i.second]=ans;
                ans--;
            }
        }
        else{
            int ans=n;
            for(auto & i : arr1){
                q[i.second]=ans;
                ans--;
            }
            arr.emplace_back(a[0],0);
            arr.emplace_back(a[n-1],n-1);
            sort(all(arr));
            for(auto & i : arr){
                q[i.second]=ans;
                ans--;
            }
        }
//    }
//    else{
//        int ans=n;
//        for(auto & i : arr1){
//            q[i.second]=ans;
//            ans--;
//        }
//        arr.emplace_back(a[0],0);
//        arr.emplace_back(a[n-1],n-1);
//        sort(all(arr));
//        for(auto & i : arr){
//            q[i.second]=ans;
//            ans--;
//        }
//    }
    for0(i,n){
        cout<<q[i]<<" ";
    }
    cout<<endl;
}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    auto begin = std::chrono::high_resolution_clock::now();
    int tc = 1;
    cin >> tc;
    while(tc--) push();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
