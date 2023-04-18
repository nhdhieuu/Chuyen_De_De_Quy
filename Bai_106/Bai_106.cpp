#include<iostream>
#include<iomanip>
using namespace std;
float XaNhat(int[], int, float);
void Nhap(int[], int);


int main()
{
	int n;
	float x;
	cin >> n;
	cin >> x;
	int* a = new int[n];
	Nhap(a, n);
	cout << "Ket qua la:" << XaNhat(a, n, x);
	return 1;
}

float XaNhat(int a[], int n, float x)
{
	if (n == 1)
		return a[0];
	float lc = XaNhat(a, n - 1, x);
	if ((abs(a[n - 1]) - x) > abs(lc - x))
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
