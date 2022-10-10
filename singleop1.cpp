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
        ln num1, ctr = 0, k;
        cin >> num1;
        char post[num1];
        cin >> post;
        for (k = 0; post[k] != '\0'; k++)
        {
            if (post[k] == '1')
                ctr++;
            else
                break;
        }
        cout << "\n"
             << ctr;
    }
    return 0;
}