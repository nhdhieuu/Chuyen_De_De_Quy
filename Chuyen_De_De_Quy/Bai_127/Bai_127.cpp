#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
bool ktHoanThien(int);
int ViTriCuoi(int[], int);

int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	int kq = ViTriCuoi(a, n);
	if (kq == -1)
		cout << "Mang khong co so hoan thien!";
	else
		cout << "Vi tri so hoan thien cuoi cung cua mang la: " << kq;
	return 0;
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
bool ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s += i;
	}
	if (s == n)
		return true;
	return false;
}
int ViTriCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (ktHoanThien(a[n - 1]))
		return n - 1;
	return ViTriCuoi(a, n - 1);
}