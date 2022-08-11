#include <bits/stdc++.h>
#define ln long long
using namespace std;
// ln num1, str1[1001], post, temp;
int main()
{
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1, str1[1001], post, temp, k;
        cin >> num1;
        str1[1] = 0;
        post = 0;
        temp = 0;
        for (k = 2; k <= num1; ++k)
            if (k % 2 == 0)
                str1[k] = --post;
            else
                str1[k] = ++temp;
        for (k = 1; k <= num1; ++k)
            cout << str1[k] - post + 1 <<' ';
        cout << "\n";
    }
}