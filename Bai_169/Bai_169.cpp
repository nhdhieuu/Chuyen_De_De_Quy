#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int&);
int ktCon(float[], int, int, int);
void XuatCon(int[], int, int, int);
void LietKe(float[], int);
void Output(float[], int);


int main()
{
	float a[100000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	cout << "Mang ban dau la: ";
	Output(a, n);
	cout << "\n";
	cout << "Cac day con toan duong co do dai lon hon 1 la: " << endl;
	LietKe(a, n);
	return 0;
}
void Input(float a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void Output(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(7) << a[i];
}
int ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}
void XuatCon(float a[], int n, int vt, int l)
{
	if (l == 0)
		return;
	XuatCon(a, n, vt, l - 1);
	cout << setw(7) << a[vt + l - 1];
}
void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	LietKe(a, n - 1);
	for (int l = 2; l <= n; l++)
	{
		if (ktCon(a, n, n - l, l) == 1)
		{
			XuatCon(a, n, n - l, l);
			cout << endl;
		}
	}
}
