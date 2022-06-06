#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int a;
    cin >> a;
    while (a--)
    {
        int x;
        cin >> x;
        int z[x];
        for (int t = 0; t < x; t++)
        {
            cin >> z[t];
        }
        int add = z[0] + z[x - 1];
        for (int t = 0; t < x - 1; t++)
        {
            add = max(add, z[t] + z[t + 1]);
        }
        cout << add << endl;
    }
    return 0;
}
