#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    // ia_anuj_10
    ln num, num1, num2, break;
    cin >> num;
    while (num--)
    {
        // ln num1, num2;
        cin >> num1 >> num2;
        // ia_anuj_10
        //  ln break;
        // break(num1 - num2);
        // cout << min(break, num2)
        //      << "\n";
        if (num1 % num2 == 0)
            cout << "0"
                 <<"\n";
        else
            cout << "1"
                  <<endl;
    }
    return 0;
}
