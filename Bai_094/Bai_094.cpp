#include<iostream>
#include<iomanip>
using namespace std;
float TongGiaTri(float[], int);
void Nhap(float[], int);


int main()
{
	int n;
	cin >> n;
	float* a = new float[n];
	Nhap(a, n);
	cout << "Ket qua la:" << TongGiaTri(a, n);
	return 1;
}

float TongGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = TongGiaTri(a, n - 1);
	if (a[n - 2] > abs(a[n - 1]))
		s += a[n - 2];
	return s;
}
void Nhap(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}


