#include <iostream>
using namespace std;

float Tinh(float, int);
int main()
{
	double x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(" << x << "," << n << ")= " << Tinh(x, n);
	return 0;
}

float Tinh(float x, int n)
{
	if (n == 0)
		return 1;
	return Tinh(x, n - 1) * (x + n);
}