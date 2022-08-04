#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    // ia_anuj_10
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1, num2;
        cin >> num1 >> num2;
        if (num2 < num1)
        {
            cout << -1 << endl;
            continue;
        }
        cout << num2 - num1 + 1 << " ";
        for (int i = 1; i <= num1; i++)
        {
            if (i != num2 - num1 + 1)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
