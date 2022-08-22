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
        ln num1, l;
        cin >> num1;
        int arr1[num1];
        for (l = 0; l < num1; l++)
            cin >> arr1[l];
        map<int, int> arreq;
        for (l = 0; l < num1; l++)
            arreq[arr1[l]]++;
        int flag = -1;
        for (auto m : arreq)
            flag = max(flag, m.second);
        if (flag > (num1 + 1) / 2)
            cout << "NO"
                 << "\n";
        else
            cout << "YES"
                 << "\n";
    }

    return 0;
}