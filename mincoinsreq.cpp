#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    ln num, num1;
    cin >> num;
    while (num--)
    {
        num1 = 0;
        cin >> num1;
        cout << (num1 % 10)
             << "\n";
    }
    return 0;
}
