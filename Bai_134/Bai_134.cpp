#include <iostream>
using namespace std;

int  TimViTri(float[], int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	int kq = TimViTri(a, n);
	if (kq != -1)
		cout << "Vi tri am lon nhat trong mang la: " << kq;
	else
		cout << "Khong co gia tri thoa man dieu kien!";
	delete[]a;
	return 0;
}
int  TimViTri(float  a[], int n) {
	if (n == 0)
		return -1;
	int lc = TimViTri(a, n - 1);
	if (a[n - 1] > 0)
		return lc;
	if (lc == -1)
		return n - 1;
	if (a[n - 1] > a[lc])
		lc = n - 1;
	return lc;
}
