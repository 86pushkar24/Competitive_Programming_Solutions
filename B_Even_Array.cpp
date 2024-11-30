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

// void push()
// {
//     int size, even(0), odd(0), count(0), flag(0);
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//         if (arr[i] % 2 == 0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//     }
//     if (((size % 2 == 0) && (odd != even)) || ((size % 2 != 0) && (even > odd)))
//     {
//         cout << "-1" << endl;
//     }
//     else
//     {
//         for (int i = 0; i < size - 1; i++)
//         {
//             if (((i % 2 == 0) && (arr[i] % 2 == 0)) || ((i % 2 != 0) && (arr[i] % 2 != 0)))
//             {
//                 flag = 1;
//                 break;
//             }
//             else
//             {
//                 swap(arr[i], arr[i + 1]);
//                 count++;
//                 i++;
//             }
//         }
//         if(flag){
//             cout << "0" << endl;
//         }
//         else
//         {
//             cout << count << endl;
//         }
        
//     }
// }

void push() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int even = 0, odd = 0;
    for (int i = 0; i < size; i++) {
        if (i % 2 == arr[i] % 2) {
            continue; // Parity matches, no need to swap
        }
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    if (even != odd) {
        cout << "-1" << endl; // Impossible to make the array good
        return;
    }

    cout << odd << endl; // Number of moves required
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
}
