#include<iostream>
#include<iomanip>
using namespace std;
int NguyenToCuoi(int[], int);
void Nhap(float[], int);
float AmNhoNhat(float[], int);
int main()
{
	int n;
	cin >> n;
	float* a = new float[n];
	Nhap(a, n);
	cout << AmNhoNhat(a, n);
	return 1;
}
float AmNhoNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = AmNhoNhat(a, n - 1);
	if (a[n - 1] >= 0)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}
void Nhap(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
