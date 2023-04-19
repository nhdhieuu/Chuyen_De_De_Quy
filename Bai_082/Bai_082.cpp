#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int);
void Xuat(float[], int);
void LietKe(float[], int);
float LonNhat(float[], int);
int main()
{
	int n;
	cin >> n;
	float* a = new float[n];
	Nhap(a, n);
	LietKe(a, n);
	return 1;
}

void Nhap(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << a[i];
	}
}


void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
	{
		cout << setw(6) << n - 1;
		return;
	}
	if (lc == a[n - 1])
		cout << setw(6) << n - 1;
	LietKe(a, n - 1);
}
float LonNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = LonNhat(a, n - 1);
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;

}