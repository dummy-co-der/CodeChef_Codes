#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    // ia_anuj_10
    ln num, num1;
    cin >> num;
    while (num--)
    {
        cin >> num1;
        if (num1 < 4)
            cout << "-1"
                 << "\n";
        else if (num1 == 4)
        {
            cout << 3 << " " << 1 << " " << 4 << " " << 2 << endl;
        }
        else
        // ia_anuj_10
        {
            int k = 1, create = 0, perm = 1;
            if (num1 % 2 == 0)
                create = num1 / 2 + 1;
            else
                create = num1 / 2 + 2;
            while (k <= num1)
            {
                if (k % 2 != 0)
                {
                    cout << perm << " ";
                    perm++;
                    // k++;
                    // continue;
                }
                else
                {
                    cout << create << " ";
                    create++;
                    // k++;
                    // continue;
                }
                k++;
            }
            cout << "\n";
        }
    }
    return 0;
}
