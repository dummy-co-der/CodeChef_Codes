#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1, k, post, str1[200001], output[200001][2];
        cin >> num1;
        cin >> post;
        for (k = 1; k <= num1; k++)
            cin >> str1[k];
        for (k = 2; k <= num1; k++)
        {
            output[k][0] = max(output[k - 1][0] + (str1[k - 1] ^ str1[k]),
                               output[k - 1][1] + ((str1[k - 1] + post) ^ str1[k]));
            output[k][1] = max(output[k - 1][0] + (str1[k - 1] ^ (str1[k] + post)),
                               output[k - 1][1] + ((str1[k - 1] + post) ^ (str1[k] + post)));
        }
        cout << max(output[num1][0], output[num1][1])
             << "\n";
    }
}