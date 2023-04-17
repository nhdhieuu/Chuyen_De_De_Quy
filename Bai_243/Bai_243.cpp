#include <iostream>
#include <cmath>
using namespace std;
float LonNhatDong(float[][100], int, int, int);
int main() {
	float a[100][100];
	int m, n, d;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	cout << "Nhap dong d: ";
	cin >> d;
	int kq = LonNhatDong(a, m, n, d);
	cout << "Gia tri lon nhat tren cot "<<d<<": " << kq;
	return 0;
}
float LonNhatDong(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return a[d][0];
	float lc = LonNhatDong(a, m, n - 1, d);
	if (a[d][n - 1] > lc)
		lc = a[d][n - 1];
	return lc;
}
