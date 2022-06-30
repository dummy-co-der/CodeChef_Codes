#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here

    ln z;
    cin >> z;
    while (z--)
    {
        ln num1 = 0, num2 = 0, num3 = 0, num4 = 0;
        cin >> num1 >> num2 >> num3 >> num4;
        if (num1 == num3 || num2 == num4)

            cout << "2"
                 << "\n";
        else
            cout << "1"
                 << "\n";
    }
    return 0;
}
