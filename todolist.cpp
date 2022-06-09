#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int a;
	cin >> a;
	while (a--)
	{
		int z, c = 0;
		cin >> z;
		for (int i = 0; i < z; i++)
		{
			int b;
			cin >> b;
			if (b >= 1000)
				c++;
		}
		cout << c << endl;
	}
	return 0;
}
