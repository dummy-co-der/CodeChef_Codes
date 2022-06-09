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
        int nums;
        cin >> nums;
        string mexi;
        cin >> mexi;
        int cache = 0;
        if (nums == 2)
            cout << "1" << endl;
        else
        {
            for (int j = 1; j < mexi.size(); j++)
            {
                if (mexi[j] == '1' && mexi[j - 1] == '0')
                    cache++;
            }
            if (mexi[0] == '1')
                cache++;
            if (mexi[mexi.size() - 1] == '0')
                cache++;
            cout << cache << "\n";
        }
    }
    return 0;
}