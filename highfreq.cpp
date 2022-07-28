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
        ln num1, m, n, flag, post;
        cin >> num1;
        ln arr[num1 + 1] = {0};
        for (m = 0; m < num1; m++)
        {
            cin >> flag;
            arr[flag]++;
        }
        for (m = 0; m < 2; m++)
        {
            for (n = 0; n < num1; n++)
            {
                if (arr[n] > arr[n + 1])
                    swap(arr[n], arr[n + 1]);
            }
        }
        if (arr[num1] % 2)
            post = arr[num1] / 2 + 1;
        else
            post = arr[num1] / 2;
        cout << max(arr[num1 - 1], post)
             << "\n";
    }
    return 0;
}
