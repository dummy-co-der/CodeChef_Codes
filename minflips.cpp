#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    // ia_anuj_10
    int z;
    cin >> z;
    while (z--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int m = 0; m < n; m++)
            cin >> a[m];
        if (n % 2 == 1)
            cout << -1 << endl;
        else
        {
            int num1 = 0, num2 = 0;
            // int num=num2-num1;
            for (int m = 0; m < n; m++)
            {
                if (a[m] == 1)
                    num2++;
                else
                    num1++;
            }
            int num = num2 - num1;
            if (num1 == num2)

                cout << 0 << endl;
            else
                cout << abs((num) / 2) << endl;
        }
    }

    return 0;
}
