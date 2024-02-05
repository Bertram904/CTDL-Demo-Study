#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector <int> a(n);
		ll F[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (i == 0) F[i] = a[i];
			else F[i] = F[i - 1] + a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cout << F[i] << " ";
		}
		cout << endl;
	}
}