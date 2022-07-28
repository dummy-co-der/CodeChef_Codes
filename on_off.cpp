#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    ln num, num1, i, result;
    cin >> num;
    while (num--)
    {
        cin >> num1;
        string str1, str2;
        cin >> str1 >> str2;
        ln flag1 = 0, flag2 = 0;
        for (int i = 0; i < str1.length(); i++)
            if (str1[i] == '1')
                flag1++;
        for (int i = 0; i < str2.length(); i++)
            if (str2[i] == '1')
                flag2++;
        result = abs(flag1 - flag2);
        if (result % 2 == 0)
            cout << "1"
                 << "\n";
        else
            cout << "0"
                 << "\n";
    }
    return 0;
}
