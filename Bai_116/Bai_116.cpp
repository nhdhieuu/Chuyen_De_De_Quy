#include <iostream>
using namespace std;

float DuongCuoi(float [], int );
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	float kq = DuongCuoi(a, n);
	if (kq != 0)
		cout << "Gia tri duong cuoi cung trong mang la: " << kq;
	else
		cout << "Khong co gia tri duong trong mang!";
	delete[]a;
	return 0;
}
float DuongCuoi(float a[], int n) {
	if (n == 0)
		return 0;
	return (a[n - 1] > 0) ? a[n - 1] : DuongCuoi(a, n - 1);
}