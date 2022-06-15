#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here

    int z;
    cin >> z;
    while (z--)
    {
        int num, j, i;
        cin >> num;
        char v;
        char etc[1000];
        for (int j = 0; j < num; j++)
        {
            cin >> etc[j];
        }
        for (int j = 0; j < num - 1; j += 2)
        {
            int i = j + 1;
            if (etc[j] == '0' && etc[i] == '0')
            {
                v = 'A';
            }
            else if (etc[j] == '0' && etc[i] == '1')
            {
                v = 'T';
            }
            else if (etc[j] == '1' && etc[i] == '0')
            {
                v = 'C';
            }
            else if (etc[j] == '1' && etc[i] == '1')
            {
                v = 'G';
            }
            cout << v;
        }
        cout << "\n";
    }
    return 0;
}
