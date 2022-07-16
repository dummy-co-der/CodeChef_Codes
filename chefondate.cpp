#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here
    ln num, num1, num2;
    cin >> num;
    while (num--)
    {
        cin >> num1 >> num2;
        if (num1 >= num2)
            cout << "yes"
                 << "\n";
        else
            cout << "no"
                 << "\n";
    }
    return 0;
}
