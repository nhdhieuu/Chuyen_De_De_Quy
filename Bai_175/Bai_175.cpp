#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
void MotVeDau(int[], int);

int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	cout << "Mang ban dau la: ";
	Output(a, n);
	cout << endl;
	MotVeDau(a, n);
	cout << "Mang sau khi dua mot ve dau la: ";
	Output(a, n);
	return 0;
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void Output(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(7);
}
void MotVeDau(int a[], int n)
{
	if (n == 0)
		return;
	if (a[n - 1] != 1)
	{
		MotVeDau(a, n - 1);
		return;
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] != 1)
		{
			swap(a[i], a[n - 1]);
			break;
		}
	}
	MotVeDau(a, n - 1);
}
