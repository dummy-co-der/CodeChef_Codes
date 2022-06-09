#include <bits/stdc++.h>
using namespace std;
int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		if (y >= x && y <= x + 200)
			cout << "yes"
				 << "\n";
		// else if (y<=x+200)
		// cout<<"yes"<<"\n";
		else
			cout << "no"
				 << "\n";
	}
	return 0;
}
