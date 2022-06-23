#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll z;
    cin >> z;
    while (z--)
    {
        int num;
        cin >> num;
        string str;
        cin >> str;
        int m = 0, n = num - 1, result = 0;
        while (n >= m)
        {
            if (str[m] == '(' and str[n] == ')')
            {
                m++;
                n--;
            }
            else if (str[m] == '(' and str[n] == '(')
            {
                n--;
                result++;
            }
            else if (str[m] == ')' and str[n] == '(')
            {
                n--;
                result++;
            }
            else if (str[m] == ')' and str[n] == ')')
            {
                result++;
                m++;
            }
        }
        cout << result << endl;
    }
    return 0;
}