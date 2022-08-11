#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1;
        cin >> num1;
        cout << __builtin_popcountll(num1) - 1 
             << "\n";
    }
    return 0;
}
