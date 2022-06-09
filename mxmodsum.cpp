#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	// your code goes here
	ll z;
	cin >> z;
	while (z--)
	{
		ll a, b, m, s;
		cin >> a >> b;
		ll answer[a];
		for (int i = 0; i < a; i++)
		{
			cin >> answer[i];
		}
		m = answer[0];
		for (int i = 1, j; i < a; i++)
		{
			if (answer[i] > m)
			{
				m = answer[i];
			}
		}
		sort(answer, answer + a);
		for (int i = a - 1; i >= 0; i--)
		{
			if (answer[i] < m)
			{
				s = answer[i];
				break;
			}
		}
		cout << max(2 * m, s + m + b + (s - m) % b) << "\n";
	}
	return 0;
}