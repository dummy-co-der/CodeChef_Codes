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
        cin >> num1 >> num2;
        num3 = num1 * num2;
        cout << num3 << "\n";
    }
    return 0;
}
