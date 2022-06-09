#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int z;
	cin >> z;
	while (z--)
	{
		int a, x, y, t, b, c, d, e;
		cin >> a >> x >> y;
		t = a - x + x - 1 + a - y + y - 1;
		b = min(x - 1, y - 1);
		d = min(x - 1, a - y);
		c = min(a - x, y - 1);
		e = min(a - x, a - y);
		t += b + d + c + e;
		cout << t << endl;
	}
	return 0;
}