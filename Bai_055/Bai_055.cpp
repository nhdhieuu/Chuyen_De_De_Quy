#include <iostream>
#include <cmath>
using namespace std;

long double TinhXn(long double, int);

int main()
{
	int n;
	long double x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	long double kq = TinhXn(x, n);
	cout << "S(" << x << "," << n << ") = " << kq;
	return 0;
}
long double TinhXn(long double x, int n)
{
	if (n == 0)
		return x;
	if (n == 1)
		return x + pow(x, 3);
	return ((1 + x * x) * TinhXn(x, n - 1) - x * x * TinhXn(x, n - 2));
}