#include <iostream>
using namespace std;

int TinhAn(int);
int TinhBn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "a(" << n << ")=" << TinhAn(n)<<endl;
	cout << "b(" << n << ")=" << TinhBn(n);
	return 0;
}

int TinhAn(int n)
{
	if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return 3*x + 2*y;
}

int TinhBn(int n)
{
	if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return x + 3 * y;
}