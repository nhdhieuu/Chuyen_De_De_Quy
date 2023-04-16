#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
int ChanCuoi(int[], int);

int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	int kq = ChanCuoi(a, n);
	if (kq == -1)
		cout << "Mang khong co so chan!";
	else
		cout << "So chan cuoi cung trong mang la: " << kq;
	return 0;
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int ChanCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (a[n - 1] % 2 == 0)
		return a[n - 1];
	return ChanCuoi(a, n - 1);
}