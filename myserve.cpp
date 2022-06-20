#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int num;
    cin >> num;
    while (num--)
    {
        int num1 = 0, num2 = 0;
        cin >> num1 >> num2;
        int result = num1 + num2;
        if ((result & 1) == 1)
        {
            (result)--;
        }
        (result) /= 2;
        cout << (((result & 1) == 1) ? " bob" : "alice") << endl;
    }
    return 0;
}