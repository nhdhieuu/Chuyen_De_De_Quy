#include <iostream>
using namespace std;
int NguyenToLonNhat(int[][100], int, int);
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
	int kq = NguyenToLonNhat(a, n, m);
	cout << "So nguyen to lon nhat trong ma tran la: " << kq;
	return 0;
}
int NguyenToLonNhat(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = NguyenToLonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
		if (lc == -1 || a[m - 1][j] > lc)
		lc = a[m - 1][j];	
	return lc;
}

bool ktNguyenTo(int n) {
	if (n <= 1)
		return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}