#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i;
	cin >> i;
	while (i--)
	{
		int a, b;
		cin >> a >> b;
		int w, x, y, z;
		w = 500 - (a * 2);
		x = 1000 - (b * 4);
		y = 500 - ((a + b) * 2);
		z = 1000 - ((b + a) * 4);
		int output1 = w + z;
		int output2 = x + y;
		int m = max(output1, output2);
		cout << m << endl;
	}
	return 0;
}
