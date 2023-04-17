#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
int ChuSoDau(int);
int TongGiaTri(int[], int);

int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	int kq = TongGiaTri(a, n);
	cout << "Tong cac gia tri co chu so dau tien la chu so le la: " << kq;
	return 0;

}

void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt /= 10;
	return dt;
}
int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 != 0)
		s += a[n - 1];
	return s;
}