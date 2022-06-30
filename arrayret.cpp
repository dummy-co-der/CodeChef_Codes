#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here

    int num = 0;
    cin >> num;
    while (num--)
    {
        ln num1 = 0, k;
        cin >> num1;
        vector<size_t> arr(num1);
        size_t post = 0;
        for (k = 0; k < num1; ++k)
        {
            cin >> arr[k];
            post += arr[k];
        }
        for (k = 0; k < num1; ++k)
        {
            cout << arr[k] - post / (num1 + 1) << " ";
        }
        cout << endl;
    }
    return 0;
}
