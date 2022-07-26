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
        ln num1, num2, hung, rup;
        cin >> num1 >> num2 >> hung >> rup;
        ln bottom = 0, top = hung, middle;
        while (bottom <= top)
        {
            middle = bottom + (top - bottom) / 2;
            if (rup - (num1 * (hung - middle) + num2 * middle) < 0)
                top = middle - 1;
            else if ((rup - (num1 * (hung - middle) + num2 * middle) < num2 - num1) || (middle == hung))
            {
                cout << hung - middle << " " << middle << endl;
                break;
            }
            else if (rup - (num1 * (hung - middle) + num2 * middle) >= num2 - num1)
                bottom = middle + 1;
        }
        if (bottom > top)
            cout << -1
                 << "\n";
    }
    return 0;
}
