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
        ln num1, k, post, flag, east, west;
        cin >> num1;
        ln str[num1];
        for (k = 0; k < num1; k++)
            cin >> str[k];
        post = -1, flag = -1;
        for (k = 0; k < num1 - 1; k++)
        {
            if (str[k] > str[k + 1])
            {
                post = k + 1;
                flag = str[post];
                break;
            }
        }
        if (post == -1 || post == num1 - 1)
        {
            cout << "yes"
                 << "\n";
            continue;
        }
        for (k = 0; k < post; k++)
        {
            if (str[k] > flag)
            {
                east = str[k];
                break;
            }
        }
        west = str[post - 1];
        for (k = post + 1; k < num1; k++)
        {
            if (str[k] >= west)
                west = str[k];
            else if (str[k] <= east && str[k] >= flag)
                flag = str[k];
            else
            {
                cout << "no"
                     << "\n";
                break;
            }
        }
        if (k == num1)
            cout << "yes"
                 << "\n";
    }
    return 0;
}
