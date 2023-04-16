#include <iostream>
using namespace std;

float TongGiaTri(float[], int);

int main()
{
	float a[] = { 2.5,23.2,12,3.5,21,3.6 };
	int n = sizeof(a) / sizeof(float);
	cout << "s= " << TongGiaTri(a, n);
	return 1;
}

float TongGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = TongGiaTri(a, n - 1);
	if (a[n - 2] < a[n - 1])
		s += a[n - 1];
	return s;
}