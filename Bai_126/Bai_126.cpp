#include<iostream>
using namespace std;
void Nhap(int[], int);
int ViTriDauTien(int[], int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	cout << "ket qua: " << ViTriDauTien(a, n);
	return 0;
}
void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int ViTriDauTien(int a[], int n) {
	if (n == 0)
		return -1;
	int lc = ViTriDauTien(a, n - 1);
	if (lc != -1)
		return lc;
	if (a[n - 1] % 2 == 0)
		return n - 1;
	return -1;
}
