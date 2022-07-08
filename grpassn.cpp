#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    ln num, num1, k;
    string result;
    cin >> num;
    while (num--)
    {
        cin >> num1;
        int arr1[num1];
        map<int, int> gass;
        for (k = 0; k < num1; k++)
        {
            cin >> arr1[k];
            gass[arr1[k]]++;
        }
        result = "yes";
        for (auto grp : gass)
        {
            if (grp.second % grp.first != 0)
            {
                result = "no";
                break;
            }
        }
        cout << result << "\n";
    }
    return 0;
}
