#include <iostream>
#include <iomanip>
using namespace std;

int Tong(int[], int);
int ChuSoDau(int);

int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	int kq = Tong(a, n);
	cout << "Tong cac so co chu so dau la so chan trong mang la: " << kq;
	delete[]a;
	return 0;
}

int Tong(int a[],int n) {
	if (n == 0)
		return 0;
	return Tong(a, n - 1) + ((ChuSoDau(a[n - 1]) % 2 == 0) ? a[n - 1] : 0);
}
int ChuSoDau(int n) {
	if (n <= 9)
		return n;
	return ChuSoDau(n / 10);
}