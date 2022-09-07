#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here

    ln num;
    cin >> num;
    while (num--)
    {
        int num1, flag1;
        cin >> num1 >> flag1;
        if (num1 >= (flag1 * (flag1 + 1) / 2))
            cout << "yes" 
                << "\n";
        else
            cout << "no" 
                 << "\n";
    }
    return 0;
}