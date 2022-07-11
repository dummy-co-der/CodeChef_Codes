#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here
    ln num, num1, num2, flag1, flag2, dir;
    cin >> num;
    while (num--)
    {
        cin >> num1 >> num2 >> flag1 >> flag2;
        dir = abs(num1 - flag1) + (num2 - flag2);
        if ((abs(num1 - flag1 == 1) && num2 == flag2) || (abs(num2 - flag2 == 1) && num1 == flag1))
        {
            cout << "no"
                 << "\n";
            continue;
        }
        if (dir & 1)
        {
            cout << "no"
                 << "\n";
        }
        else
        {
            cout << "yes"
                 << "\n";
        }
    }
    return 0;
}
