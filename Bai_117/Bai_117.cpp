#include <iostream>
using namespace std;

float CuoiCung(float[], int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	float kq = CuoiCung(a, n);
	if (kq != -1)
		cout << "Gia tri am cuoi cung lon hon -1 trong mang la: " << kq;
	else
		cout << "Khong co gia tri trong mang!";
	delete[]a;
	return 0;
}
float CuoiCung(float a[], int n) {
	if (n == 0)
		return -1;
	if (a[n - 1] < 0 && a[n - 1]>-1)
		return a[n - 1];
	return CuoiCung(a, n - 1);
}