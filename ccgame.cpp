
#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1, post1[200001], flag, k;
        cin >> num1;
        flag = 0;
        for (k = num1 - 1; k >= 0; --k)
        {
            cin >> post1[k];
            if (post1[k] % 2 == 1)
                flag ^= k;
        }
        if (flag == 0)
            cout << "Cook"
                 << "\n";
        else
            cout << "Chef"
                 << "\n";
    }
}