#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here
    ln num, num1, hv, spd;
    cin >> num;
    while (num--)
    {
        cin >> num1 >> hv;
        spd = num1 - hv;
        if (spd <= 0)
            cout << "0"
                 << "\n";
        else if (spd % 4 == 0)
            cout << spd / 4
                 << "\n";
        else
            cout << (spd / 4) + 1
                 << "\n";
    }

    return 0;
}
