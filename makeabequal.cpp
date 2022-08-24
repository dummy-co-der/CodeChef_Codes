#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1, m;
        ln makea = 0;
        ln bequal = 0;
        cin >> num1;
        ln flag1[num1], flag2[num1], flag3[num1];
        for (m = 0; m < num1; m++)
            cin >> flag1[m];
        for (m = 0; m < num1; m++)
            cin >> flag2[m];
        for (m = 0; m < num1; m++)
        {
            flag3[m] = flag1[m] - flag2[m];
            bequal += flag3[m];
            if (flag3[m] > 0)
            {
                makea += flag3[m];
            }
        }
        if (bequal == 0)
            cout << makea << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}
