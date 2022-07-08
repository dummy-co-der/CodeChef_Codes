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
            cout << 0 << "\n";
        else
            cout << num2 - num1 << "\n";
    }
    return 0;
}
