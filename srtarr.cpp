#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here
    ln num, num1, k;
    cin >> num;
    while (num--)
    {
        cin >> num1;
        string sot1;
        cin >> sot1;
        ln result = 0;
        for (k = 0; k < num1 - 1; k++)
        {
            if (sot1[k] == '1' && sot1[k + 1] == '0')
                result += 1;
        }
        cout << result << "\n";
    }
    return 0;
}
