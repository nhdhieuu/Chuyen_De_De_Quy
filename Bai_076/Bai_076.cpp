#include<iostream>
#include<iomanip>
using namespace std;
void LietKe(int[], int);
void Nhap(int[], int);
bool ktDang3m(int);

int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	LietKe(a, n);
	return 1;
}
void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktDang3m(a[n - 1]))
		cout << setw(6) << a[n - 1];
}
void Nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
bool ktDang3m(int n)
{
	double epsilon = 0.0000000001;
	double logVal = log(n) / log(3);
	if (abs(logVal - round(logVal)) <= epsilon)
		return true;
	else return false;
}