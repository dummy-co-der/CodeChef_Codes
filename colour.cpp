#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    ln num, col, l, c;
    cin >> num;
    while (num--)
    {
        col = 0;
        vector<ln> vrr(3);
        for (ln l = 0; l < 3; l++)
            cin >> vrr[l];
        for (ln l = 0; l < 3; l++)
        {
            if (vrr[l] != 0)
            {
                vrr[l]--;
                col++;
            }
        }
        for (ln l = 0; l < 3; l++)
        {
            for (ln c = l + 1; c < 3; c++)
            {
                if (vrr[l] > vrr[c])
                    swap(vrr[l], vrr[c]);
            }
        }     
        if (vrr[0] >= 2)
            cout << col + 3 << "\n";
        else if (vrr[0] == 1)
        {
            if (vrr[2] >= 2)
                cout << col + 2
                     << "\n";
            else
                cout << col + 1
                     << "\n";
        }
        else
        {
            if (vrr[1] == 0)
                cout << col
                     << "\n";
            else
                cout << col + 1
                     << "\n";
        }
    }
    return 0;
}
