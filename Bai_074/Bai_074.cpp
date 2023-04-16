#include <iostream>
#include <iomanip>
using namespace std;

void Xuat(int[], int);
int ChuSoDau(int );

int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "cac phan tu trong mang: ";
	Xuat(a, n);
	delete[]a;
	return 0;
}

void Xuat(int a[], int n) {
	if (n == 0)
		return;
	Xuat(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 == 0)
		cout << setw(3) << a[n - 1];
}
int ChuSoDau(int n) {
	if (n <= 9)
		return n;
	return ChuSoDau(n /10);
}