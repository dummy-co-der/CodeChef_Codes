#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    ln num, num1;
    cin >> num;
    while (num--)
    {
        // num1=0;
        cin >> num1;
        if (num1 < 7 && num1 % 2 != 0)
            cout << "no"
                 << "\n";
        else
            cout << "yes"
                 << "\n";
    }
    return 0;
}
