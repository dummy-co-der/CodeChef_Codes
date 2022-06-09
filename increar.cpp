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
        if (m > n)
        {
            int opr = m - n;
            if (opr % 2 == 0)
            {
                cout << opr / 2 << endl;
            }
            else
            {
                cout << (opr / 2) + 2 << endl;
            }
        }
        else if (n > m)
        {
            cout << n - m << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}
