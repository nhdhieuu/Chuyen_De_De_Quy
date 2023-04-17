#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int&);
float TimX(float[], int);

int main()
{
	float a[100000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	float kq = TimX(a, n);
	cout << "x = " << kq;
	return 0;
}
void Input(float a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
float TimX(float a[], int n)
{
	if (n == 1)
		return abs(a[0]);
	float lc = TimX(a, n - 1);
	if (abs(a[n - 1]) > lc)
		lc = abs(a[n - 1]);
	return lc;
}