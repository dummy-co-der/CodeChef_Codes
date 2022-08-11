#include <bits/stdc++.h>
#define ln long long
using namespace std;

int dominant()
{
    ln num1, k, d;
    cin >> num1;
    vector<int> domin;
    map<int, int> ant;
    for (k = 0; k < num1; k++)
    {
        cin >> d;
        ant[d]++;
    }
    for (auto k : ant)
        domin.push_back(k.second);
    if (domin.size() == 1)
    {
        cout << "yES"
             << "\n";
        return 0;
    }
    sort((domin).begin(), (domin).end());
    if (domin[domin.size() - 1] > domin[domin.size() - 2])
        cout << "yES"
             << "\n";
    else
        cout << "no"
             << "\n";
    return 0;
}

int main()
{
    ln num;
    cin >> num;
    while (num--)
        dominant();
}
