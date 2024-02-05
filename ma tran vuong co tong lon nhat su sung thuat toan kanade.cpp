#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int kanade_algro (int a[], int n)
{
	int sum1 = 0, sum2 = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		sum1 += a[i];
		sum2 = max(sum2, sum1);
		if (sum1 < 0) sum1 = 0;
	}
	return sum2;
}

void solve () {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	int ngo[n];
	int res = INT_MIN;
	for (int l = 0; l < m; l++)
	{
		memset(ngo, 0, sizeof(ngo));
		for (int r = l; r < m; r++)
		{
			for (int i = 0; i < n; i++)
			{
				ngo[i] += a[i][r];
			}
			res = max(res, kanade_algro(ngo, n));
		}
	}
	cout << res;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
		cout << endl;
	}
}