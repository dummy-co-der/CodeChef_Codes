#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    int num1, num, maxi, output, flag;
    cin >> num1;
    while (num1--)
    {
        cin >> num;
        vector<int> htg(num, 0);
        unordered_map<int, int> post;
        maxi = 0;
        for (int h = 0; h < num; h++)
        {
            cin >> htg[h];
            post[htg[h]]++;
            maxi = max(maxi, htg[h]);
        }
        output = 0, flag = 0;
        for (auto h : post)
        {
            if (h.second == 1)
                output++;
            flag = max(flag, h.second);
        }
        if (output % 2)
        {
            int s = (output + 1) / 2;
            if (post[maxi] == 1)
            {
                if (flag == 2)
                    s++;
            }
            cout << s << "\n";
        }
        else
        {
            int s = output / 2;
            cout << s
                 << "\n";
        }
    }
    return 0;
}
