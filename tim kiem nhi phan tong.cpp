#include <bits/stdc++.h>
using namespace std;
// tim vi tri xuat hien cuoi cung cua phan tu < x trong doanl, r;
int  last (int a[], int l, int r, int x)
{
	int res = 1;
	while (l <= r)
	{
		int m = (l + r)/2;
		if (a[m] < x)
		{
			res = m;
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		int ans = 0;
		for (int i = 0; i < n - 1; i++)
		{
			int l = last(a, i + 1, n - 1, k + a[i]);
			if (l != 1)
			{
				ans += l - i;
			}
		}
		cout << ans;
		cout << endl;
	}
}