#include <bits/stdc++.h>
using namespace std;
// your code goes here

void flag(int num, int arr[], int arr1[], int prv[])
{
    prv[0] = arr[0];
    for (int j = 1; j < num; j++)
        prv[j] = __gcd(prv[j - 1], arr[j]);
    arr1[num - 1] = arr[num - 1];
    for (int j = num - 2; j >= 0; j--)
        arr1[j] = __gcd(arr1[j + 1], arr[j]);
}
int flag1(int num, int prv[], int arr1[], int p, int r)
{
    if (p == 0)
        return arr1[r + 1];
    if (r == num - 1)
        return prv[p - 1];

    return __gcd(prv[p - 1], arr1[r + 1]);
}
int main()
{
    // your code goes here
    // ia_anuj_10
    int z;
    cin >> z;
    while (z--)
    {
        int num, post = 0, j;
        cin >> num;
        int prv[num], arr[num], arr1[num];
        for (j = 0; j < num; j++)
        {
            cin >> arr[j];
        }
        flag(num, arr, arr1, prv);
        for (j = 0; j < num; j++)
        {
            if ((flag1(num, prv, arr1, j, j)) > 1)
            {
                post++;
            }
        }
        cout << post << endl;
    }
    return 0;
}