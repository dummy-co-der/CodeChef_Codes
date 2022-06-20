#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isEqualRing(int n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}
unsigned countRing(unsigned int z)
{
    return (int)log2(z) + 1;
}
int main()
{
    // your code goes here
    int post;
    cin >> post;
    while (post--)
    {
        ll num1, num2, num, flag, r, R;
        cin >> num1 >> num2 >> num;
        flag = num1 ^ num2;
        if (num1 == num2)
            cout << 0 << "\n";
        else if (flag < num)
            cout << 1 << "\n";
        else
        {
            r = countRing(flag);
            R = countRing(num);
            if (r == R)
            {
                if (isEqualRing(num))
                    cout << -1 << "\n";
                else
                    cout << 2 << "\n";
            }
            else
                cout << -1 << "\n";
        }
    }
    return 0;
}
