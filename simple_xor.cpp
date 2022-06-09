#include <bits/stdc++.h>
using namespace std;
int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int girl, boy;
		cin >> girl >> boy;
		int flag = 0;
		int count = 0;
		for (int i = girl; i <= boy; i++)
		{
			int m = i;
			int n = i + 1;
			int o = i + 2;
			int p = i + 3;
			if ((m ^ n ^ o ^ p) == 0 && p <= boy)
			{
				flag = 1;
				cout << m << " " << n << " " << o << " " << p << endl;
				break;
			}
			else
			{
				count++;
				if (count > 10)
					break;
			}
		}
		if (flag == 0)
			cout << -1 << endl;
	}
	return 0;
}