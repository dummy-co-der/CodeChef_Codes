#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
   
    int num;
    cin >> num;
    while (num--)
    {
        int num1, result, cache, total;
        cin >> num1;
        result = num1 / 100;
        cache = num1 % 100;
        total = result + cache;
        if (total <= 10)
            cout << total << "\n";
        else
            cout << "-1"
                 << "\n";
    }
    return 0;
}
