#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    ln num, num1, num2, l, v, end_s;
    cin >> num2;
    while (num2--)
    {
        cin >> l;
        vector<int> ens(l, 0);
        for (v = 0; v < l; v++)
        {
            cin >> ens[v];
            if (ens[v] == 1)
                num1 = v;
            if (ens[v] == l)
                num = v;
        }
        end_s = 0;
        if (num1 == 0 && num == l - 1)
            end_s = 0;
        else if (num1 == 0 && num != l - 1)
            end_s = l - 1 - num;
        else if (num1 != 0 && num == l - 1)
            end_s = num1;
        else
        {
            end_s = l - 1 - num + num1;
            if (num < num1)
                end_s -= 1;
        }
        cout << end_s
             << "\n";
    }
    return 0;
}
