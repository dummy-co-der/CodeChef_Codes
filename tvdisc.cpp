#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1, post, num2, flag;
        cin >> num1 >> post >> num2 >> flag;
        if (num1 - num2 > post - flag)
            cout << "second"
                 << "\n";
        else if (num1 - num2 == post - flag)
            cout << "any" 
                 << "\n";
        else
            cout << "First" 
                 << "\n";
    }
    return 0;
}
