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
        ln num1, num2;
        cin >> num1 >> num2;
        cout << (num1 * 4) + num2
             << "\n";
    }
    return 0;
}
