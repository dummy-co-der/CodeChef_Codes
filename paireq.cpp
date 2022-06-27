#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    
    int num;
    cin >> num;
    while (num--)
    {
        int num1;
        cin >> num1;
        int str[num1];
        for (int z = 0; z < num1; z++)
            cin >> str[z];
        map<int, int> post;
        int p_post = 0;
        for (auto z : str)
        {
            post[z]++;
            p_post = max(p_post, post[z]);
        }
        cout << (num1 - p_post) << endl;
    }
    return 0;
}
