#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
  
    int num;
    cin >> num;
    while (num--)
    {
        int post = 0;
        string gth;
        cin >> post >> gth;
        string str;
        for (int i = 0; i < gth.length(); i++)
        {
            if (gth[i] == 'A')
                str += "T";
            if (gth[i] == 'T')
                str += "A";
            if (gth[i] == 'C')
                str += "G";
            if (gth[i] == 'G')
                str += "C";
        }
        cout << str << "\n";
    }

    return 0;
}
