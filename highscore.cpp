#include <bits/stdc++.h>
using namespace std;
int main()
{
    int g;
    cin >> g;
    while (g--)
    {
        int v, w, x, y, answer, z;
        cin >> v >> w >> x >> y >> z;
        answer = max(w, max(x, max(y, z)));
        cout << answer << endl;
    }
    return 0;
}
