#include <iostream>
using namespace std;

float TinhAn(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "a(" << n << ")= " << TinhAn(n);
	return 0;
}

float TinhAn(int n)
{
	if (n == 1)
		return 2;
	float at = TinhAn(n - 1);
	return (at * at + 2) / (2 * at);
}