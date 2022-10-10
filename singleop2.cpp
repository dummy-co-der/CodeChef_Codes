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
        ln num1, k, result = 0;
        cin >> num1;
        string single;
        cin >> single;
        for (k = 0; k < num1; ++k)
        {
            result++;
            if (single[k + 1] == '1')
                break;
        }
        cout << result 
             << "\n";
    }
    return 0;
}