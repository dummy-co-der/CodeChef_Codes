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
        int high, low, m;
        cin >> high >> low >> m;
        if (m >= high && m < low)
        {
            cout << "yes"
                 << "\n";
        }
        else
        {
            cout << "no"
                 << "\n";
        }
    }
    return 0;
}
