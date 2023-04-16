#include <iostream>
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
		return 0.5;
	return ((Tong(n - 1)) + ((float)(2 * n + 1) / (2 * n + 2)));
}