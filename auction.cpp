#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here
    ln num, num1, num2, num3;
    cin >> num;
    while (num--)
    {
        cin >> num1 >> num2 >> num3;
        if (num1 > num2 && num1 > num3)
            cout << "ALICE"
                 << "\n";
        else if (num2 > num3)
            cout << "BOB"
                 << "\n";
        else
            cout << "CHARLIE"
                 << "\n";
    }
    return 0;
}
