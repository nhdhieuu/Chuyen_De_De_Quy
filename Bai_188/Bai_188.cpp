#include <iostream>
using namespace std;
int TanSuat(int[], int, int);
bool ktThuoc(int[], int, int[], int);
int main() {
	int n,m;
	cout << "Nhap so phan tu a: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap so phan tu mang b: ";
	cin >> m;
	int* b = new int[m];
	for (int i = 0; i < m; i++) {
		cout << "Nhap b[" << i << "]: ";
		cin >> b[i];
	}
	if (ktThuoc(a, n, b, m))
		cout << "Mang b thuoc mang a";
	else
		cout << "Mang b khong thuoc mang a";
	return 0;
}
bool ktThuoc(int a[], int n, int b[], int m) {
	if (m == 1) {
		if (TanSuat(a, n, b[0]) == 0)
			return 0;
		return 1;
	}
	if (TanSuat(a, n, b[m - 1]) > 0 && ktThuoc(a,n,b,m-1) == 1)
		return 1;
	return 0;
}
int TanSuat(int a[], int n, int x) {
	if (n == 0)
		return 0;
	return TanSuat(a, n - 1, x) + ((a[n - 1] == x) ? 1 : 0);
}