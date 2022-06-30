#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here

    ln num, k;
    cin >> num;
    while (num--)
    {
        ln num1, str = 0;
        cin >> num1;
        ln arr[num1];
        for (k = 0; k < num1; k++)
        {
            cin >> arr[k];
            str += arr[k];
        }
        if (str % 2 == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}