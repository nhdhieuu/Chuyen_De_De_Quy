#include<iostream>
using namespace std;

float TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Ket qua la:" << TinhAn(n);
	return 1;
}
float TinhAn(int n)
{
	if (n == 1)
		return 2;
	float at = TinhAn(n - 1);
	return (5 * at + sqrt(24 * at * at - 8));
}