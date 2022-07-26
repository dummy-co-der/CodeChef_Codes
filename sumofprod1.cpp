#include <bits/stdc++.h>
#define ln long long
using namespace std;
const int L = 1e5 + 10;

int main()
{
    // your code goes here
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1, k, answer, post;
        int arr[L];
        cin >> num1;
        vector<int> z;
        for (k = 0; k < num1; k++)
        {
            cin >> arr[k];
            if (arr[k] == 0)
            {
                z.push_back(k);
            }
        }
        answer = (num1 * (num1 + 1)) / 2;
        post = 0;
        if (z.size() == 0)
            cout << answer
                 << "\n";
        else
        {
            post = post + (z[0] + 1) * (num1 - z[0]);
            for (k = 1; k < z.size(); k++)
            {
                post = post + (z[k] - z[k - 1]) * (num1 - z[k]);
            }
            cout << answer - post
                 << "\n";
        }
    }
    return 0;
}
