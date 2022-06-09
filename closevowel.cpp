#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int code;
	cin >> code;
	set<char> a;
	a.insert('c');
	a.insert('g');
	a.insert('l');
	a.insert('r');
	while (code--)
	{
		int l, ans = 1;
		string t;
		cin >> l >> t;
		for (char ch : t)
			if (a.find(ch) != a.end())
				ans = (ans * 2) % 1000000007;
		cout << ans << endl;
	}
	return 0;
}