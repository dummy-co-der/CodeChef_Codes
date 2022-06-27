#include <bits/stdc++.h>
#define ln long long
using namespace std;

// your code goes here

bool result()
{
    ln num, num1, k;
    cin >> num1 >> num;
    ln arr1[num1];
    for (k = 0; k < num1; k++)
        cin >> arr1[k];
    for (k = 0; k < num1 - 1; k++)
    {
        if (arr1[k] > arr1[k + 1])
        {
            if ((arr1[k] + arr1[k + 1]) > num)
                return 0;
            else
                swap(arr1[k], arr1[k + 1]);
        }
    }
    return 1;
}
int main()
{
    ln z;
    cin >> z;
    while (z--)
    {
        if (result())
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}