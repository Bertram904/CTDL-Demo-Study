#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string ten;
	string ns;
	float a, b, c;
	void in()
	{
		cout << ten << " " << ns << " " << fixed << setprecision(1) << a + b + c;
	}
	void nhap()
	{
	getline(cin, ten);
	cin >> ns;
	cin >> a >>b >> c;
	}
};
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}