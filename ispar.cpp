#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool odd(int t)
{
	return t & 1;
}
int main()
{
	ll i;
	cin >> i;
	while (i--)
	{
		ll x;
		ll y;
		cin >> x >> y;
		if (y == 1)
		{
			if (odd(x))
				cout << "odd"
					 << "\n";
			else
				cout << "even"
					 << "\n";
		}
		else if (y == 2)
			cout << "odd"
				 << "\n";
		else
			cout << "even"
				 << "\n";
	}
	return 0;
}