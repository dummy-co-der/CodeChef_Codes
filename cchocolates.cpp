#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	// 	total=0;
	cin >> t;
	while (t--)
	{
		int x, y, z, total;
		cin >> x >> y >> z;
		total = ((x * 5) + (y * 10)) / z;
		cout << total << endl;
	}
	return 0;
}