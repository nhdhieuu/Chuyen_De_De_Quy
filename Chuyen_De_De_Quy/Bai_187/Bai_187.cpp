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
	cout << "So luong gia tri thoa man tinh chat lon hon tat ca cac gia tri dung dang truoc no la: " << kq;
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
	if (n == 1)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] >= a[n - 1])
			flag = 0;;
	}
	if (flag == 1)
		dem++;
	return dem;
}