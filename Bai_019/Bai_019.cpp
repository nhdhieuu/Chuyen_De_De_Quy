#include <iostream>
#include <cmath>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tong(n);
	cout << "S(" << n << ") = " << kq;
	return 0;
}
float Tong(int n)
{
	if (n == 0)
		return 0;
	return (Tong(n - 1) + 1 / ((n + 1) * sqrt(n) + n * sqrt(n + 1)));
}