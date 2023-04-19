#include <iostream>
using namespace std;

int TichSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = TichSoLe(n);
	cout << "Tich cac chu so le cua " << n << " la: " << kq;
	return 0;
}
int TichSoLe(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 == 1)
			return n;
		return 1;
	}
	int dv = n % 10;
	if (dv % 2 == 1)
		return 	TichSoLe(n / 10) * dv;
	return 	TichSoLe(n / 10);
}