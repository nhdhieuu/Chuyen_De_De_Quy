#include<iostream>
#include<iomanip>
using namespace std;
float DauTien(float[], int);
void Nhap(float[], int);


int main()
{
	int n;
	cin >> n;
	float* a = new float[n];
	Nhap(a, n);
	cout << "Ket qua la:" << DauTien(a, n);
	return 1;
}

float DauTien(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = DauTien(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] > 2003)
		return a[n - 1];
	return 0;
}
void Nhap(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
