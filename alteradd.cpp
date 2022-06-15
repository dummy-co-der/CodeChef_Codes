#include <bits/stdc++.h>
using namespace std;
int main()
{
    int z;
    cin >> z;
    while (z--)
    {
        int num1, num2;
        cin >> num1 >> num2;
        int alteradd = 0;
        long int subt = num2 - num1;
        if (subt % 3 == 0 || subt % 3 == 1)
            alteradd = 1;
        if (alteradd)
            cout << "yes"
                 << "\n";
        else
            cout << "no"
                 << "\n";
    }
    return 0;
}
