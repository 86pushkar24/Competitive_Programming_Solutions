#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int min = *min_element(a.begin(), a.end());
        int max = *max_element(a.begin(), a.end());
        int sum = max + min;
        for(int i = 0; i < n; i++){
            cout << (sum - a[i]) << " ";
        }
        cout << endl;
    }
    return 0;
}