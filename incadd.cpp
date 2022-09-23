#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    // ia_anuj_10
    ln num, num1, q, a;
    cin >> num;
    while (num--)
    {
        // int num1, q;
        cin >> num1 >> q;
        vector<int> arr1(num1);
        for (int c = 0; c < num1; c++)
            cin >> arr1[c];
        while (q--)
        {
            //ia_anuj_10
            // int c, a;
            int c;
            cin >> c >> a;
            arr1[c - 1] = a;
            int result = 0;
            for (int d = 0; d < num1-1; d++)
            {
                if (arr1[d] > arr1[d + 1])
                {
                    result = max(result, abs(arr1[d] - arr1[d + 1]));
                }
            }
            cout << result 
                 << "\n";
        }
    }
    return 0;
}
