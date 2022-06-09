#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	cin >> i;
	while (i--)
	{
		int w, x, y, z, a, b;
		cin >> w >> x >> y >> z;
		a = max(w, x);
		b = max(y, z);
		if (a == b)
			cout << "tie" << endl;
		else if (a > b)
			cout << "q" << endl;
		else
			cout << "p" << endl;
	}
	return 0;
}