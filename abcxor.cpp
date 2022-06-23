#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll num;
    cin >> num;
    while (num--)
    {

        ll num1, z, num2;
        cin >> num1 >> z;
        num2 = pow(2, num1) - 1;
        cout << num2 * (num2 - 1) << endl;
    }
    return 0;
}
