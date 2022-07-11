#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here
    ln num, num1, num2, num3, output;
    cin >> num;
    while (num--)
    {
        cin >> num1 >> num2 >> num3;
        output = num1 + num2 + num3;
        if (num1 >= 10 && num2 >= 10 && num3 >= 10 && output >= 100)
            cout << " PASS "
                 << "\n";
        else
            cout << " FAIL "
                 << "\n";
    }
    return 0;
}
