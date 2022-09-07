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
        ln flag1, flag2, flag3;
        flag1 = -501;
        flag2 = num2;
        flag3 = num1 * 3 + 501 + num2;
        cout << flag1 << " " 
             << flag2 << " " 
             << flag3 << " ";
        cout << "\n";
    }
    return 0;
}