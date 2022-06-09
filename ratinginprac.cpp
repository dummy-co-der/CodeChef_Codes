#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int a;
    cin >> a;
    while (a--)
    {
        int b;
        cin >> b;
        int a[b];
        int z = 0;
        for (int t = 0; t < b; t++)
        {
            cin >> a[t];
            if (t > 0)
            {
                if (a[t] < a[t - 1])
                    z++;
            }
        }
        if (z > 0)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}
