#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here
    ln num, flag, output, q;
    cin >> num;
    while (num--)
    {
        cin >> flag;
        vector<int> str(flag);
        bool cook = false;
        output = 0;
        for (auto &q : str)
        {
            cin >> q;
            output += q;
            if (q == 1)
            {
                cook = true;
            }
        }
        if (cook)
            cout << "chef"
                 << "\n";
        else
        {
            if (output % 2)
                cout << "chef"
                     << "\n";
            else
                cout << "chefina"
                     << "\n";
        }
    }
    return 0;
}
