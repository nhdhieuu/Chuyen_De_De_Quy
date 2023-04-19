#include <iostream>
using namespace std;

float  DuongNhoNhat(float[], int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	float kq = DuongNhoNhat(a, n);
	if (kq != 0)
		cout << "Gia tri duong nho nhat trong mang la: " << kq;
	else
		cout << "Khong co gia tri thoa man dieu kien!";
	delete[]a;
	return 0;
}
float  DuongNhoNhat(float  a[], int n) {
	if (n == 0)
		return 0;
	float lc = DuongNhoNhat(a, n-1);
	if (a[n - 1] <= 0)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}
