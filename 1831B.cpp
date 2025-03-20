#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<int> b(n);
        for(int i=0; i<n; i++){
            b[i];
        }
        map<int, int> mp1,mp2;
        // get the maximum consecutive elements frequency in vector a and b and store it in map mp1 and mp2
        int max1 = 0, max2 = 0;
        for(int i=0; i<n; i++){
            int j = i;
            while(j<n && a[i]==a[j]){
                j++;
            }
            max1 = max(max1, j-i);
            mp1[a[i]] = max(mp1[a[i]], j-i);
            i = j-1;
        }
        for(int i=0; i<n; i++){
            int j = i;
            while(j<n && b[i]==b[j]){
                j++;
            }
            max2 = max(max2, j-i);
            mp2[b[i]] = max(mp2[b[i]], j-i);
            i = j-1;
        }
        // iterate on both the maps and get the maximum of frequency if element is present in both the maps
        
    }
}