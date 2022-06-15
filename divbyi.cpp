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
        ll int num, t = 0;
        cin >> num;
        int arr[num];
        t = num;
        arr[num - 1] = num;
        for (int j = 1; j < num; j++)
        {
            if (j % 2 != 0)
            {
                arr[num - 1 - j] = t - (num - j);
                t = arr[num - 1 - j];
            }
            else
            {
                arr[num - 1 - j] = t + (num - j);
                t = arr[num - 1 - j];
            }
        }
        for (int j = 0; j < num; j++)
        {
            cout << arr[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
