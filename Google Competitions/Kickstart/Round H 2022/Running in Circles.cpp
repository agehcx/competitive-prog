#include <bits/stdc++.h>

using namespace std;

// Kickstart 2022 - Round H
// Running in Circles (6pts, 9pts)

#define ll long long

void solver()
{
	ll tc = 1;
	int y;
	cin >> y;
	while (y--)
	{
		ll l, n, cc = 0, s = 0;
		cin >> l >> n;
		while (n--)
		{
			ll z;
			char c;
			cin >> z >> c;
			if (c == 'C')
			{
				s += z;
				if (s >= l)
				{
					cc += s / l;
					s %= l;
				}
			}
			else
			{
				s -= z;
				if (s <= -l)
				{
					cc += abs(s) / l;
					s = -(abs(s)) % l;
				}
			}
		}
		cout << "Case #" << tc << ": " << cc << endl;
		tc++;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solver();
}
