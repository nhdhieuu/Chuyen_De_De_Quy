#include<iostream>
#include<iomanip>
using namespace std;
int NguyenToCuoi(int[], int);
void Nhap(int[], int);
bool ktNguyenTo(int);

int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout << NguyenToCuoi(a, n);
	return 1;
}
int NguyenToCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (ktNguyenTo(a[n - 1]))
		return a[n - 1];
	return NguyenToCuoi(a, n - 1);
}
bool ktNguyenTo(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}
void Nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
