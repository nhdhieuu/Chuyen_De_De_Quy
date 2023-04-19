#include <iostream>
using namespace std;
int TongDong(int[][100], int, int,int);
int main() {
	int a[100][100], m, n,d;
	cout << "Nhap so hang: ";
	cin >>m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	cout << "Nhap dong d: ";
	cin >> d;
	int kq = TongDong(a, m, n,d);
	cout << kq;
	return 0;
}
int TongDong(int a[][100], int m, int n,int d)
{
	if (m == 0)
		return 0;
	int s = TongDong(a, m, n-1,d);
	if (a[d][n - 1] % 2 == 0)
		s += a[d][n - 1];
	return s;
}