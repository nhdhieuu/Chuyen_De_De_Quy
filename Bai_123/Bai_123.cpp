#include <iostream>
using namespace std;

int ktDang2m(int);
int TimGiaTri(int[], int);
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
		cout << "Phan tu dau tien co dang 2^m trong mang la: " << kq;
	else
		cout << "Khong co gia tri thoa man dieu kien!";
	cout << ktDang2m(1);
	delete[]a;
	return 0;
}
int ktDang2m(int n)
{
	int flag = 1;
	for (int t=n;t>1;t/=2)
	{
		int du = t % 2;
		if (du != 0)
			flag = 0;
	}
	return flag;
}
int  TimGiaTri(int  a[], int n) {
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (lc != 0)
		return lc;
	if (ktDang2m(a[n - 1]))
		return a[n - 1];
	return 0;
}
