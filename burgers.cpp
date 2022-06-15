#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here

    int num;
    cin >> num;
    while (num--)
    {
        int num1, num2;
        cin >> num1 >> num2;
        if (num1 <= num2)
            cout << num1 << "\n";
        else
            cout << num2 << "\n";
    }
    return 0;
}
