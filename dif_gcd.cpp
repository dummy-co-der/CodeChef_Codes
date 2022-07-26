#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    int num;
    cin >> num;
    while (num--)
    {
        ln num1, num2, k, flag1, flag2, post;
        cin >> num1 >> num2;
        if (num2 < 2 * num1)
            cout << num2 << " " << num2
                 << "\n";
        else if (num2 >= 2 * num1 && num2 % num1 == 0)
            cout << num2 << " " << num1
                 << "\n";
        else
        {
            post = num2 / 2;
            if (num2 >= 2 * num1)
                post = 2 * num1;
            int mini = INT_MIN;
            for (k = num1; k <= post; k++)
            {
                ln d = num2 / k;
                ln currdiff = (k * d) - k;
                if (currdiff > mini)
                {
                    flag1 = k;
                    flag2 = (k * d);
                    mini = currdiff;
                }
            }
            cout << flag1 << " " << flag2 << "\n";
        }
    }
    return 0;
}
