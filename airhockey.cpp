#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num;
    cin >> num;
    while (num--)
    {
        int num1 = 0, num2 = 0;
        cin >> num1 >> num2;
        cout << 7 - max(num1, num2) << endl;
    }
    return 0;
}
