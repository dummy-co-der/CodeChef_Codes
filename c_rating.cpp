#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int c = (b - a) / 8;
		if ((b - a) % 8 != 0)
		{
			cout << c + 1 << endl;
		}
		else
			cout << c << endl;
	}
	return 0;
}
