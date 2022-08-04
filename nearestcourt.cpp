#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    // ia_anuj_10
    ln num, post, output;
    cin >> num;
    while (num--)
    {
        ln flag1, flag2;
        cin >> flag1 >> flag2;
        output = (flag1 + flag2) / 2;
        post = max(flag1, flag2);
        cout << abs(output - post)
             << "\n";
    }
    return 0;
}
