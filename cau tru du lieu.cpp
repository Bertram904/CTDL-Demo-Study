#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x, k;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cin >> k >> x;
		int l, r;
		auto it = lower_bound(a, a + n, x) - a;
		if (a[it] == x)
		{
			r = it + 1;
			l = it - 1;
		}
		else{
			r = it;
			l = it - 1;
		}
		for (int i = k/2 - 1; i >= 0; i--)
		{
			cout << a[l - i] << ' ';
		}
		for (int i = 0; i < k/2; i++)
		{
			cout << a[r + i] << " ";
		}
		cout << endl;
	}
}