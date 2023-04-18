#include <iostream>
#include <cmath>
using namespace std;
int DemGiaTri(int[][100], int, int, int);
int ChuSoDau(int);
int main() {
	int a[100][100], m, n, c;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	cout << "Nhap cot c: ";
	cin >> c;
	int kq = DemGiaTri(a, m, n, c);
	cout << "Tich cac so chan tren cot c:  " << kq;
	return 0;
}
int ChuSoDau(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	return ChuSoDau(n / 10);
}
int DemGiaTri(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemGiaTri(a, m - 1, n, c);
	if (ChuSoDau(a[m - 1][c]) % 2 == 0)
		dem++;
	return dem;
}