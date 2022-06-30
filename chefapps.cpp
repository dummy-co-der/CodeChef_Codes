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
        ln num1, num2, num3, post;
        cin >> post >> num1 >> num2 >> num3;
        ln result = post - (num1 + num2);
        if (result >= num3)
        {
            cout << "0"
                 << "\n";
        }
        else
        {
            result = post - min(num1, num2);
            if (result >= num3)
            {
                cout << "1"
                     << "\n";
            }
            else

                cout << "2"
                     << "\n";
        }
    }
    return 0;
}
