#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int num;
    cin >> num;
    while (num--)
    {
        int num1 = 0, num2 = 0, too = 0, many = 0, flag, post;
        cin >> num1 >> num2;
        if (num1 % 10 == 0)
            too = num1 / 10;
        else
            too = (num1 / 10) + 1;
        if (num2 % 10 == 0)
            many = num2 / 10;
        else
            many = (num2 / 10) + 1;
        if (too > many)
            cout << too - many << endl;
        else
            cout << many - too << endl;
    }
    return 0;
}
