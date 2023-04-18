#include <iostream>
using namespace std;
void XayDung(int[], int, int[], int&);
bool ktNguyenTo(int);
int main() {
	int n,m=0;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n], b[100];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	XayDung(a, n, b, m);
	cout << "Mang gom cac so nguyen to trong a la: ";
	for (int i = 0; i < m; i++) {
		cout << b[i] << " ";
	}
	delete[]a;
	return 0;
}
void XayDung(int a[], int n, int b[], int& m) {
	if (n == 0)
		return;
	XayDung(a, n-1, b, m);
	if (ktNguyenTo(a[n - 1]))
	{
		b[m++] = a[n - 1];
	}
}
bool ktNguyenTo(int n){
	if (n <= 1)
		return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}