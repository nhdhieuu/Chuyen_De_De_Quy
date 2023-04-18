#include<iostream>
using namespace std;
void Nhap(float[], int);
void TimDoan(float[], int n, float&, float&);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float* a = new float[n];
	Nhap(a, n);
	float x, y;
	TimDoan(a, n, x, y);
	cout << "[" << x << "," << y << "]";
	return 0;
}
void Nhap(float a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void TimDoan(float a[], int n, float& x, float& y) {
	if (n == 1) {
		x = a[0];
		y = a[0];
		return;
	}
	TimDoan(a, n - 1, x, y);
	if (a[n - 1] < x)
		x = a[n - 1];
	if (a[n - 1] > y)
		y = a[n - 1];
}