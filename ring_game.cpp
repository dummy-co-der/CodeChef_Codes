#include <bits/stdc++.h>
#define ln long long
using namespace std;
int main()
{
    // your code goes here
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1;
        cin >> num1;
        ln post1, post2, post;
        post1 = 0;
        post2 = 0;
        post = 0;
        ln flag[100001];
        ln g;
        for (g = 1; g <= num1; ++g)
        {
            cin >> flag[g];
            post2 += flag[g] == 0;
            post1 += flag[g] == 1;
        }
        for (g = 1; g <= num1; ++g)
        {
            if (g == 1)
                post += (flag[1] == flag[num1]);
            else
                post += flag[g] == flag[g - 1];
        }
        post -= abs(post2 - post1);
        cout << (post % 4 == 0 ? "BOB" : "ALICE")
             << "\n";
    }
}