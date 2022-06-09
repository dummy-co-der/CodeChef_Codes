#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	// your code goes here
	ll i, a, b, c, d;
	cin >> i;
	while (i--)
	{
		cin >> a >> b >> c >> d;
		ll t = b - a;
		ll f = c * d;
		if (f > t)
		{
			cout << "overflow"
				 << "\n";
		}
		else if (f == t)
		{
			cout << "filled"
				 << "\n";
		}
		else
		{
			cout << "unfilled"
				 << "\n";
		}
	}
	return 0;
}