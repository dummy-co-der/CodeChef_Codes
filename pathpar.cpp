#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        int m, n;
        cin >> m >> n;
        if (m % 2 == 0)
            cout << "Yes" << endl;
        else
        {
            if (n == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}