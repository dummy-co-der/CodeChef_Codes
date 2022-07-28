#include <bits/stdc++.h>
#define ln long long
#define all(x) (x).begin(), (x).end()
using namespace std;
int count(string str, char arr)
{
    int post = 0;
    for (auto i : str)
    {
        if (i == arr)
            post++;
    }
    return post;
}

int main()
{
    // your code goes here
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1, flag;
        string str;
        cin >> num1 >> flag >> str;

        map<char, int> mp;

        mp['1'] = count(all(str), '1');
        mp['0'] = count(all(str), '0');

        int flag1 = max(mp['0'], mp['1']) - min(mp['0'], mp['1']);

        ln post1 = 0;
        if (flag1 % flag)
            post1++;

        flag1 /= flag;
        flag1 += post1;

        cout << flag1
             << "\n";
    }
    return 0;
}