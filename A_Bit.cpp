#include <iostream>
// #include<adhocproblems.h>
#include <string>

using namespace std;

int main()
{
    int n,x(0);
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (str == "X++" || str == "++X")
        {
          x = x+1; 
        }
        else
        {
            x = x-1;
        }
    }
    cout << x << endl;
    return 0;
}
