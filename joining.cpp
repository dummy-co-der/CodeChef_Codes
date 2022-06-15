#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int num;
    cin >> num;
    while (num--)
    {
        int num1, num2, boy, girl;
        cin >> num1 >> num2;
        girl = num1 / 5;
        if (num1 % 5 == 0)
            girl--;
        boy = num2 / 5;
        if (num2 % 5 == 0)
            boy--;
        cout << girl - boy << "\n";
    }
    return 0;
}
