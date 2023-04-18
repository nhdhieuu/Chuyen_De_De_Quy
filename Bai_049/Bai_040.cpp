#include<iostream>
using namespace std;

float UocLeLonNhat(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Ket qua la:" << UocLeLonNhat(n);
	return 1;
}
float UocLeLonNhat(int n)
{
	n = abs(n);
	if (n % 2 != 0)
		return n;
	return UocLeLonNhat(n / 2);
}