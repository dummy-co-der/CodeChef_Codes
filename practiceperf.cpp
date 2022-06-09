#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] >= 10)
            c++;
    }
    cout << c << endl;
    return 0;
}
