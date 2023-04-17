#include <iostream>
using namespace std;

float AmDau(float[], int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	float kq = AmDau(a, n);
	if (kq != 0)
		cout << "Gia tri am dau tien trong mang la: " << kq;
	else
		cout << "Khong co gia tri am trong mang!";
	delete[]a;
	return 0;
}

float AmDau(float a[], int n) {
	if (n == 0)
		return 0;
	float lc = AmDau(a, n - 1);
	return (lc < 0 ? lc : ((a[n - 1] < 0) ? a[n - 1] : 0));
}