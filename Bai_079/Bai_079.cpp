#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void LietKe(int[], int);
int ktChinhPhuong(int);


int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	cout << "Cac vi tri co gia tri la so chinh phuong la: ";
	LietKe(a, n);
	return 0;
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktChinhPhuong(a[n - 1]) == 1)
		cout << setw(6) << n - 1;
}
int ktChinhPhuong(int n)
{
	n = abs(n);
	if (n == 0 || n == 1)
		return 1;
	for (int i = 2; i <= n / 2; i++)
	{
		if (i * i == n)
			return 1;
	}
	return 0;
}