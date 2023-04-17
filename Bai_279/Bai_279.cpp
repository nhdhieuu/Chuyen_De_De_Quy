#include <iostream>
#include <cmath>
using namespace std;
void ThemDong(int[][100], int&, int, int );
int main() {
	int a[100][100];
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
	ThemDong(a, m, n, d);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
void ThemDong(int a[][100], int& m, int n, int d)
{
	if (n == 0)
	{
		m++;
		return;
	}
	ThemDong(a, m, n - 1, d);
	for (int i = m;i > d;i--)
		a[i][n - 1] = a[i - 1][n - 1];
	a[d][n - 1] = 1;
}

