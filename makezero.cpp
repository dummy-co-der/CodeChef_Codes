#include <iostream>
using namespace std;
int main()
{
    int z;
    cin >> z;
    while (z--)
    {
        int n, m[32] = {};
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x, j = 0;
            cin >> x;
            while (x)
            {
                if (m[j] == 0)
                    m[j] = x % 2;
                x /= 2;
                j++;
            }
        }
        int answer = 0;
        for (int i = 0; i < 32; i++)
        {
            answer += m[i];
        }
        cout << answer << endl;
    }
    return 0;
}
