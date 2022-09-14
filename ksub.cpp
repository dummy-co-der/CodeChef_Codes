#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    ln num, num1, flag, s, k, i, result;
    cin >> num;
    while (num--)
    {
        cin >> num1 >> flag;
        vector<ln> a;
        k = 0;
        for (i = 0; i < num1; i++)
        {
            cin >> s;
            k = __gcd(k, s);
            a.push_back(s);
        }
        s = 0;
        result = 0;
        for (i = 0; i < num1; i++)
        {
            s = __gcd(s, a[i]);
            if (s == k)
            {
                result++;
                s = 0;
            }
        }
        if (result >= flag)
            cout << "yEs"
                 << "\n";
        else
            cout << "nO"
                 << "\n";
    }
    return 0;
}
