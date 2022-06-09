#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    // ia_anuj_10
    int d;
    cin >> d;
    while (d--)
    {
        int num1, num2, num;
        cin >> num1 >> num2;
        num = num1 + num2;
        if (num % 2 == 0)
            cout << "yes"
                 << "\n";
        else
            cout << "no"
                 << "\n";
    }
    return 0;
}
