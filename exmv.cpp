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
        ll num, num1, result;
        cin >> num1 >> num;
        result = (num1 - 1) * (2 * num - num1);
        cout << result << endl;
    }
    return 0;
}
