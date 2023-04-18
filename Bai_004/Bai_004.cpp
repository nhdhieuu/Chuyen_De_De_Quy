#include<iostream>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Ket qua la:" << Tong(n);
	return 1;
}
float Tong(int n)
{
	if (n == 0)
		return 1;
	return (Tong(n - 1) + (float)1 / (2 * n + 1));
}