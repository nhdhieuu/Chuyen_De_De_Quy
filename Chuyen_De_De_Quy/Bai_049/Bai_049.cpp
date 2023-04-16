#include <iostream>
using namespace std;

int Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tinh(n);
	cout << "So hang thu " << n << " cua day la: " << kq;
	return 0;
}
int Tinh(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2;
	return (4 * Tinh(n - 1) + Tinh(n - 2));
}