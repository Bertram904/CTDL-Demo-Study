#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	int num = 0;
	vector <int> v;
	int res = 0;
	int dem = 0;
	for (char x : s)
	{
		if (isdigit(x))
		{
			num = num * 10 + x - '0';
		}
		
		else {
			res += num;
			num = 0;
		}
	}
	v.push_back(res);
	res = 0;
	v.push_back(res + num);
	for (auto x : v)
	{
		cout << x << " ";
	}
	
}