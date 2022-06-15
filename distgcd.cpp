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
        ll int nums, num1, num2, dist = 0;
        cin >> num1 >> num2;
        nums = abs(num1 - num2);
        for (int j = 1; j <= sqrt(nums); j++)
        {
            if (nums % j == 0)
            {
                if (nums / j == j)
                {
                    dist += 1;
                }
                else
                {
                    dist += 2;
                }
            }
        }
        cout << dist << endl;
    }
    return 0;
}
