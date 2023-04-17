#include <iostream>
using namespace std;

int  TimGiaTri(int[], int);
int ktToanLe(int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	int kq = TimGiaTri(a, n);
	if (kq != 0)
		cout << "Gia tri thoa man dieu kien la: " << kq;
	else
		cout << "Khong co gia tri thoa man dieu kien!";
	delete[]a;
	return 0;
}
int ktToanLe(int n)
{
	if (n % 2 == 1)
		return 1;
	return 0;
}
int  TimGiaTri(int  a[], int n) {
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (!ktToanLe(a[n-1]))
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}
