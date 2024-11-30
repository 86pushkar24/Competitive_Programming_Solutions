


// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include<string>
// // #include<adhocproblems.h>
// using namespace std;
// #define int long long


// signed main()
// {
//    int n;
//    cin >> n;
//    vector <int> arr;
//    for (int i = 1; i <= n; i++)
//    {
//     if (n%i == 0)
//     {
//         // arr.push_back(arr[i]);
//         cin >> arr[i];
//     }
//    }
//    for (int i = 0; i < arr.size(); i++)
//    {
//     cout << arr[i] << endl;
//    }
   
//    return 0;
// }
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
#define int long long

signed main()
{
   int n;
   cin >> n;
   vector<int> arr;

   // Read input into the vector using push_back
   for (int i = 1; i <= n; i++)
   {
      if (n % i == 0)
      {
        //  int num;
        //  cin >> num;
         arr.push_back(i);
      }
   }

   // Output the elements of the vector
   for (int i = 0; i < arr.size(); i++)
   {
      cout << arr[i] << endl;
   }

   return 0;
}
