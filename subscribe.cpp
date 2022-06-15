#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here

    int z;
    cin >> z;
    while (z--)
    {
        int num1, num2;
        cin >> num1 >> num2;
        if (num1 <= 6)
            cout << num2 << endl;
        else
        {
            int flag = num1 / 6;
            if (num1 % 6 == 0)
                cout << flag * num2 << "\n";
            else
                cout << flag * num2 + num2 << "\n";
        }
    }
    return 0;
}
