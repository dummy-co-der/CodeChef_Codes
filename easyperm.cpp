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
        ln num1, easy;
        cin >> num1;
        for (easy = num1; easy >= 1; easy--)
        {
            cout << easy << " ";
        }
        cout << "\n";
    }

    return 0;
}
