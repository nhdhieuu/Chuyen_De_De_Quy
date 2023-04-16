#include <iostream>
using namespace std;

float NhoNhat(float[], int);

int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float* a = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	float kq = NhoNhat(a, n);
	cout << "Gia tri nho nhat trong mang la: " << kq;
	delete[]a;
	return 0;
}
float NhoNhat(float a[], int n) {
	if (n == 1)
		return a[0];
	return min(a[n - 1], NhoNhat(a, n - 1));
}