#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    
    int z;
    cin >> z;
    while (z--)
    {
        int num1, num2;
        cin >> num1 >> num2;
        if (num2 >= num1)
            cout << "0"
                 << "\n";
        else
            cout << num1 - num2 << "\n";
    }
    return 0;
}
