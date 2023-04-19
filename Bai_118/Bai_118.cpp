#include<iostream>
#include<iomanip>
using namespace std;
int DemNguyenTo(int[], int);
void Nhap(int[], int);
int ChinhPhuongDau(int[], int);
bool ktChinhPhuong(int);


int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout << ChinhPhuongDau(a, n);
	return 1;
}

void Nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int ChinhPhuongDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChinhPhuongDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (ktChinhPhuong(a[n - 1]))
		return a[n - 1];
	return -1;
}
bool ktChinhPhuong(int n)
{
	int i = 1;
	while (n > 0) {
		n -= i;
		i += 2;
	}
	return (n == 0);
}
