#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    // ia_anuj_10
    int z;
    cin >> z;
    while (z--)
    {
        int t;
        cin >> t;
        vector<int> arr(t);
        for (int j = 0; j < t; j++)
            cin >> arr[j];
        int low = arr[0], high = arr[0];
        int post = 0;
        for (int j = 1; j < t; j++)
        {
            if (arr[j] > low && arr[j] < high)
            {
                post = 1;
                break;
            }
            low = min(low, arr[j]);
            high = max(high, arr[j]);
        }
        if (post == 1)
            cout << "no"
                 << "\n";
        else
            cout << "yes"
                 << "\n";
    }
    return 0;
}
