#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int num;
    cin >> num;
    while (num--)
    {
        string flag, post;
        int z = 0;
        cin >> z;
        if ((z & 1) == 0)
        {
            for (int j = 1; j <= z / 2; j++)
            {
                if ((j & 1) == 1)
                    flag += '0';
                else
                    flag += '1';
            }
            post += flag;
            reverse(post.begin(), post.end());
            post += flag;
            cout << post << endl;
        }
        else
        {
            for (int j = 1; j <= z; j++)
            {
                if ((j & 1) == 1)
                    post += '0';
                else
                    post += '1';
            }
            cout << post << endl;
        }
    }
}