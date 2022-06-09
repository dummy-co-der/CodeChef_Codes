#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int z;
    cin >> z;
    while (z--)
    {
        int x;
        cin >> x;
        int a1[x], a2[x];
        for (int i = 0; i < x; i++)
            cin >> a1[i];
        for (int i = 0; i < x; i++)
            cin >> a2[i];
        map<pair<int, int>, int> mpp;
        ll answer = 0;
        for (int i = 0; i < x; i++)
        {
            answer = answer + mpp[{a1[i], a2[i]}];
            mpp[{a2[i], a1[i]}]++;
        }
        cout << answer << endl;
    }
    return 0;
}