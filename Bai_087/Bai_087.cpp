#include <iostream>
using namespace std;

float TongDuong(float[], int);

int main()
{
	float a[] = { 2.5,23.2,12,3.5,21,3.6 };
	int n = sizeof(a) / sizeof(float);
	cout << "s= " << TongDuong(a, n);
	return 1;
}

float TongGiaTri(float a[], int n)
{
	if (n == 0)
		return 0;
	float s = TongDuong(a, n - 1);
	if (a[n - 1]>0)
		s += a[n - 1];
	return s;
}