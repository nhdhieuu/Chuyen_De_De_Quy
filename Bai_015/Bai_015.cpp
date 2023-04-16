#include <iostream>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(" << n << ")= " << Tong(n);
	return 0;
}

float Tong(int n)
{
	if (n == 0)
		return 0;
	return Tong(n - 1) + (float)1 / n / (n + 1);
}