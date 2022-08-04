#include <bits/stdc++.h>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    // ia_anuj_10
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1, num2, v;
        cin >> num1;
        deque<int> p;
        for (v = 1; v <= num1; v++)
        {
            if (v % 2)
                p.push_back(v);
            else
                p.push_front(v);
        }
        for (auto v : p)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}