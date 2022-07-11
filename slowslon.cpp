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
        int num1, num2, num3, post1, post2, flag;
        cin >> num1 >> num2 >> num3;
        if ((num1 * num2) < num3)
        {
            post1 = (num2 * num2) * num1;
            cout << post1
                 << "\n";
        }
        else
        {
            post1 = num3 / num2;
            if (num3 % num2 == 0)
            {
                post2 = post1 * (num2 * num2);
                cout << post2
                     << "\n";
            }
            else
            {
                post2 = num3 % num2;
                flag = (post1 * (num2 * num2)) + (post2 * post2);
                cout << flag
                     << "\n";
            }
        }
    }
    return 0;
}
