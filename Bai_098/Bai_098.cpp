#include <iostream>
using namespace std;

int TanSuat(float[], int, float);

int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int kq = TanSuat(a, n, x);
	cout << "Tan suat xuat hien cua x trong mang la: " << kq;
	delete[]a;
	return 0;
}
int TanSuat(float a[], int n, float x) {
	if (n == 0)
		return 0;
	return TanSuat(a, n - 1, x) + ((a[n - 1] == x) ? 1 : 0);
}