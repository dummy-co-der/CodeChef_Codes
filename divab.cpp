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
        ln num1, num2, num3, post;
        cin >> num1 >> num2 >> num3;
        if (num1 % num2 == 0)
            cout << "-1"
                 << "\n";
        else
        {
            ln post = num3;
            if (post % num1 != 0)
                post = num3 + num1 - (num3 % num1);
            for (post; !(post % num1 == 0 && post % num2 != 0); post = post + num1)
                ;
            cout << post << "\n";
        }
    }
    return 0;
}
