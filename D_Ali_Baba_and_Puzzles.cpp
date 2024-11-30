


#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
// #include<adhocproblems.h>
using namespace std;
#define int long long


signed main()
{
    int a , b ,c,d;
    cin >> a >>b >>c >>d;
    string output = "NO";
    if (a+b-c == d) output ="YES";
    if (a+b*c == d) output ="YES";
    if (a-b+c == d) output ="YES";
    if (a-b*c == d) output ="YES";
    if (a*b+c == d) output ="YES";
    if (a*b-c == d) output ="YES";
    cout << output << endl;
    
    return 0;
}
