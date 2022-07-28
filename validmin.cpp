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
        ln num1, num2, num3, num4;
        string result = "NO";
        cin >> num1 >> num2 >> num3;
        num4 = min(min(num1, num2), min(num2, num3));
        if (num1 == num2 && num1 == num4)
            result = "YES";
        else if (num1 == num3 && num1 == num4)
            result = "YES";
        else if (num2 == num3 && num2 == num4)
            result = "YES";
        cout << result << "\n";
    }
    return 0;
}
