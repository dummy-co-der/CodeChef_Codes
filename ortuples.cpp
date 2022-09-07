#include <iostream>
#define ln long long
using namespace std;

int main()
{
    // your code goes here
    ln num;
    cin >> num;
    while (num--)
    {
        ln num1, num2, num3, arr1[4] = {1,0,1,4}, result = 1, o;
        cin >> num1 >> num2 >> num3;
        for (o = 0; o < 30; ++o)
            result *= arr1[((num1 >> o) & 1) + ((num2 >> o) & 1) + ((num3 >> o) & 1)];
        cout << result 
             << "\n";
    }
    return 0;
}
