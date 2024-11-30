#include <stdcpp.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    // auto min_it = min_element(arr, arr + n);
    // auto max_it = max_element(arr, arr + n);
    // int min_index = distance(arr, min_it);
    // int max_index = distance(arr, max_it);
    
    // cout << "Minimum value: " << *min_it << ", index: " << min_index << endl;

    // cout << "Maximum value: " << *max_it << ", index: " << max_index << endl;
    int max_value=0;
    int min_index=0;
    int min_value=INT_MAX;
    int max_index=0;

    for(int i=0;i<n;i++){
        if(arr[i]>max_value){
            max_value=arr[i];
            max_index=i;
        }
    }
            // cout << max_index << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min_value)
        {
            min_value = arr[i];
            min_index = i;
        }
        
    }
            // cout << min_index << endl;
    

    if(max_index > min_index){
        int ans1 = max_index;
        // cout << ans1 << endl;
        int ans2 = n-1 - (min_index+1);
        // cout << ans2 << endl;

        cout << ans1+ans2;
    }
    else
    {
        int ans1 = max_index;
        int ans2 = n-1- min_index;
        cout << (ans1+ans2) << endl;
    }
    
    
}

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    clear();
}

