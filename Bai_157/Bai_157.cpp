#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
bool ktHoanThien(int);
void HoanThienGiam(int[], int);

int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	cout << "Mang ban dau la: ";
	Output(a, n);
	cout << "\n";
	HoanThienGiam(a, n);
	cout << "Mang sau khi da sap xep so hoan thien giam dan la: ";
	Output(a, n);
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
void HoanThienGiam(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (ktHoanThien(a[i]) && ktHoanThien(a[n - 1]) && a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	}
	HoanThienGiam(a, n - 1);
}
void Output(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(7);
}