#include <bits/stdc++.h>
using namespace std;
int main()
{
    int z;
    cin >> z;
    while (z--)
    {
        int a, answer;
        cin >> a;
        int m[a];
        for (int i = 0; i < a; i++)
        {
            cin >> m[i];
            if (m[i] != 0)
                answer = i;
        }
        cout << answer << endl;
    }
    return 0;
}
