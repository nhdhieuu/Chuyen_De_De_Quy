#include <iostream>
using namespace std;
int TanSuat(float[][100], int, int, float);
int main() {
	int n, m;
	float a[100][100],x;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	cout << "Nhap x: ";
	cin >> x;
	int kq =TanSuat(a, m,n,x);
	cout << "Tan suat xuat hien cua "<<x<<": " << kq;
	return 0;
}
int TanSuat(float a[][100], int m, int n, float x)
{
	if (m == 0)
		return 0;
	int dem = TanSuat(a, m - 1, n, x);
	for (int j = 0;j < n;j++)
		if (a[m - 1][j] == x)
			dem = dem + 1;
	return dem;
}