#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int&);
void XayDung(float[], int, float[], int&);
void Output(float[], int);

int main()
{
	float a[100000], b[100000];
	int n, k;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	cout << "Mang ban dau la: ";
	Output(a, n);
	cout << endl;
	XayDung(a, n, b, k);
	cout << "Mang vua xay dung la: ";
	Output(b, k);
	return 0;
}
void Input(float a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 0)
	{
		k = 0;
		return;
	}
	XayDung(a, n - 1, b, k);
	if (a[n - 1] < 0)
		b[k++] = a[n - 1];
}
void Output(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(7);
}