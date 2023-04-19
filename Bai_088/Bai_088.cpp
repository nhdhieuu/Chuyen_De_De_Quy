#include<iostream>
#include<iomanip>
using namespace std;
int TongGiaTri(int[], int);
void Nhap(int[], int);


int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout << "Ket qua la:" << TongGiaTri(a, n);
	return 1;
}

int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if (abs(a[n - 1]) / 10 % 10 == 5)
		s = s + a[n - 1];
	return s;
}
void Nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}


