#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int);
int TimGiaTri(int[], int);
bool ktDang5m(int);

int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout << TimGiaTri(a, n);
	return 1;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (!ktDang5m(a[n - 1]))
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}
void Nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
bool ktDang5m(int n)
{
	double epsilon = 0.0000000001;
	double logVal = log(n) / log(5);
	if (abs(logVal - round(logVal)) <= epsilon)
		return true;
	else return false;
}