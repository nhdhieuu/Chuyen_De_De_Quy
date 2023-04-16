#include <iostream>
using namespace std;
int NguyenToDau(int[][100], int, int);
bool ktNguyenTo(int);
int main() {
	int a[100][100], n, m;
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	int kq = NguyenToDau(a, n, m);
	cout << "So nguyen to dau tien trong ma tran la: " << kq;
}
int NguyenToDau(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = NguyenToDau(a, m - 1, n);
	if (lc != -1)
		return lc;
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
		return a[m - 1][j];
	return -1;
}
bool ktNguyenTo(int n) {
	if (n <= 1)
		return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}