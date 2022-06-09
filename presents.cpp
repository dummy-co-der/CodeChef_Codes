#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int z, b, c, ans;
        cin >> z;
        c = z / 5;
        b = z % 5;
        ans = 4 * c + b;
        cout << ans << endl;
    }
    return 0;
}