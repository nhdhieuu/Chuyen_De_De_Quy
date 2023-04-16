#include <iostream>
using namespace std;
float Tong(float[], int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	float kq = Tong(a, n);
	cout << "Tong cac phan tu trong mang la: " << kq;
	return 0;
}

float Tong(float a[], int n) {
	if (n == 0)
		return 0;
	return Tong(a, n - 1) + a[n - 1];
}