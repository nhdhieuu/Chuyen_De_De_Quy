#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
int ChanNhoNhat(int[], int);

int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	int kq = ChanNhoNhat(a, n);
	if (kq == -1)
		cout << "Mang khong co so chan!";
	else
		cout << "So chan nho nhat trong mang la: " << kq;
	return 0;
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int ChanNhoNhat(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChanNhoNhat(a, n - 1);
	if (a[n - 1] % 2 != 0)
		return lc;
	if (lc == -1)
		return a[n - 1];
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}