#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    // your code goes here

    int z;
    cin >> z;
    while (z--)
    {
        ll num1, num2, g, compute, j;
        cin >> num1 >> num2;
        ll maxi = max(num1, num2);
        ll h = (num1 + num2) - maxi;
        if (h != 0)
        {
            compute = (int(log2(maxi / h)));
            g = h;
            for (j = 0; j < compute; j++)
            {
                g *= 2;
            }
            if (g != maxi)
                compute++;
            cout << compute + maxi << "\n";
        }
        else if (maxi == 0 && h == 0)

            cout << "0"
                 << "\n";
        else

            cout << "-1"
                 << "\n";
    }
    return 0;
}
