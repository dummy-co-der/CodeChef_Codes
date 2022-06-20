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
        cout << num1 / 10 * num2 << endl;
    }
    return 0;
}
