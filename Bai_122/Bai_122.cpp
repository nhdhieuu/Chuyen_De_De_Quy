#include <iostream>
using namespace std;

int  TimGiaTri(int [], int);
int ChuSoDau(int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int * a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	int kq = TimGiaTri(a, n);
	if (kq != 0)
		cout << "Phan tu dau tien co chu so dau tien la so le trong mang la: " << kq;
	else
		cout << "Khong co gia tri thoa man dieu kien!";
	delete[]a;
	return 0;
}
int  TimGiaTri(int  a[], int n) {
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	return ((ChuSoDau(lc) % 2 != 0) ? lc : ((ChuSoDau(a[n - 1]) % 2 != 0) ? a[n - 1] : 0));
}
int ChuSoDau(int n) {
	if (n <= 9)
		return n;
	return ChuSoDau(n / 10);
}