#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here
    ln num, num1, k;
    cin >> num;
    while (num--)
    {
        cin >> num1;
        ln str[num1];
        ln oddc = 0, twop = 0, onep = 0, sump = 0, p = 0;
        for (k = 0; k < num1; k++)
        {
            cin >> str[k];
            if (str[k] == 1)
                onep++;
            else
            {
                if (str[k] == 2)
                {
                    twop++;
                }
                sump += str[k];
                p++;
                if (str[k] % 2)
                    oddc++;
            }
        }
        if (onep == 1)
        {
            if (!(oddc % 2))
            {
                cout << "chef"
                     << "\n";
                continue;
            }
            if (twop == 0)
            {
                cout << "chefina"
                     << "\n";
                continue;
            }
            sump -= 2;
            p--;
            if ((sump - p) % 2)
            {
                cout << "chefina"
                     << "\n";
                continue;
            }
            else
            {
                cout << "chef"
                     << "\n";
                continue;
            }
        }
        else if (onep > 1)
        {
            if ((sump - p) % 2)
            {
                cout << "chef"
                     << "\n";
                continue;
            }
            else
            {
                cout << "chefina"
                     << "\n";
                continue;
            }
        }
        if (oddc % 2)
        {
            cout << "chef"
                 << "\n";
            continue;
        }
        else
        {
            cout << "chefina"
                 << "\n";
            continue;
        }
    }
    return 0;
}
