#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
int DoiXungDau(int[], int);
bool ktDoiXung(int);

int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	int kq = DoiXungDau(a, n);
	if (kq == 10)
		cout << "Mang khong co so doi xung!";
	else
		cout << "So doi xung dau tien trong mang la: " << kq;
	return 0;
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
bool ktDoiXung(int n)
{
	int dn = 0;
	for (int t = n = abs(n); t != 0; t /= 10)
		dn = dn * 10 + t % 10;
	if (dn == n)
		return true;
	return false;
}
int DoiXungDau(int a[], int n)
{
	if (n == 0)
		return 10; int lc = DoiXungDau(a, n - 1);
	if (lc != 10)
		return lc;
	if (ktDoiXung(a[n - 1]))
		return a[n - 1];
	return 10;
}