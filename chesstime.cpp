#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    ln num, num1, output;
    cin >> num;
    while (num--)
    {
        cin >> num1;
        output = (num1 * 60) / 20;
        cout << output
             << "\n";
    }
    return 0;
}
