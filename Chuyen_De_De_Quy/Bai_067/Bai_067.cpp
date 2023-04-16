#include <iostream>
using namespace std;

int GiaiThua(int);
int ToHop(int, int);

int main()
{
	int n, k;
	cout << "Nhap n: ";
	cin >> n;
	do
	{
		cout << "Nhap k: ";
		cin >> k;
	} while (k > n);
	int kq = ToHop(n, k);
	cout << "To hop chap k cua n phan tu la: " << kq;
	return 0;
}
int GiaiThua(int n)
{
	if (n == 0)
		return 1;
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= GiaiThua(n - 1) * n;
		return f;
	}
}
int ToHop(int n, int k)
{
	return (GiaiThua(n) / (GiaiThua(k) * GiaiThua(n - k)));
}