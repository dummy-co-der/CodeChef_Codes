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
        int m, n;
        cin >> m >> n;
        int result = 0;
        while (m % 3 != 0 && n % 3 != 0)
        {
            result++;
            int num1 = m, num2 = n;
            // b=abs(a-b);
            // else
            // b=abs(a-b);
            m = abs(m - num2);
            n = abs(num1 - n);
        }
        cout << result << "\n";
    }
    return 0;
}
