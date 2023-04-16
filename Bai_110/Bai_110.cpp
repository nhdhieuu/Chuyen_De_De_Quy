#include <iostream>
using namespace std;

float DuongDau(float [], int );
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	float kq = DuongDau(a, n);
	if (kq != 0)
		cout << "Gia tri duong dau tien trong mang la: " << kq;
	else
		cout << "Khong co gia tri duong trong mang!";
	delete[]a;
	return 0;
}

float DuongDau(float a[], int n) {
	if (n == 0)
		return 0;
	float lc = DuongDau(a, n - 1);
	return (lc > 0 ? lc : ((a[n - 1] > 0) ? a[n - 1] : 0));
}