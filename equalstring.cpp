#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here

    int z;
    cin >> z;
    while (z--)
    {
        long long int num, t, count = 0;
        cin >> num;
        string num1, num2, s = " ";
        cin >> num1 >> num2;
        for (int j = 0; j < num; j++)
        {
            if (num1[j] == num2[j])
                count += 1;
            else
            {
                t += 1;
                s += num2[j];
            }
        }
        sort(s.begin(), s.end());
        int result = 0;
        for (int j = 0; j < s.size() - 1; j++)
        {
            if (s[j] != s[j + 1])
                result += 1;
        }
        cout << result << endl;
    }
    return 0;
}
