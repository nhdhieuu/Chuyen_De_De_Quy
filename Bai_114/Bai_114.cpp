#include<iostream>
using namespace std;
void Nhap(int[], int, int&, int&);
int DauTien(int[], int, int, int);
int main() {
	int n, x, y;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n, x, y);
	cout << "ket qua: " << DauTien(a, n, x, y);
	return 0;
}
void Nhap(int a[], int n, int& x, int& y) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}
int DauTien(int a[], int n, int x, int y) {
	if (n == 0)
		return x;
	int lc = DauTien(a, n - 1, x, y);
	if (lc != x)
		return lc;
	if (a[n - 1] > x && a[n - 1] < y)
		return a[n - 1];
	return x;
}