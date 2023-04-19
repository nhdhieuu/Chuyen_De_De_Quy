#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
int DemGiaTri(int[], int);

int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	int kq = DemGiaTri(a, n);
	cout << "So luong gia tri co chu so tan cung bang 5 la: " << kq;
	return 0;
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int DemGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	if (abs(a[n - 1]) % 10 == 5)
		dem++;
	return dem;
}