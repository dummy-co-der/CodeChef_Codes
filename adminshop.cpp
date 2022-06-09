#include <iostream>
#include <conio.h>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        double n, x;
        cin >> n >> x;
        double sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            cout << ceil(x / v[0]) << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            ll k = ceil(x / v[0]);
            if (k > n)
            {
                cout << k << endl;
                ;
            }
            else
                cout << n << endl;
        }
    }
    return 0;
}