#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int&);
void XuatBo2(float, float);
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
	cout << endl;
	cout << "Cac cap gia tri trong mang thoa man dieu kien x <= y la: " << endl;
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
		cout << a[i] << setw(10);
}
void XuatBo2(float x, float y)
{
	cout << setw(10) << setprecision(3);
	cout << "(" << x << "," << y << ")" << endl;
}
void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] <= a[n - 1])
			XuatBo2(a[i], a[n - 1]);
		if (a[n - 1] <= a[i])
			XuatBo2(a[n - 1], a[i]);
	}
	LietKe(a, n - 1);
}