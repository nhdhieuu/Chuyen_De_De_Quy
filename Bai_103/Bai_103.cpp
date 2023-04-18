#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int&);
float LonNhat(float[], int);

int main()
{
	float a[100000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	float kq = LonNhat(a, n);
	cout << "Gia tri lon nhat trong mang mot chieu cac so thuc la: " << kq;
	return 0;
}
void Input(float a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
float LonNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = LonNhat(a, n - 1);
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}