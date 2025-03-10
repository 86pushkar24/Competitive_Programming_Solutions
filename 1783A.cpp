#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if(v[0]==v[n-1]){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            swap(v[0],v[1]);
            swap(v[0],v[n-1]);
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}
// Time Complexity: O(NlogN)
// Space Complexity: O(N)