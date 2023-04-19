#include <iostream>
using namespace std;
int DemChinhPhuong(int[][100], int, int);
bool ktChinhPhuong(int);
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
	int kq = DemChinhPhuong(a, n, m);
	cout << "So luong so chinh phuong: " << kq;
	return 0;
}
int DemChinhPhuong(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemChinhPhuong(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktChinhPhuong(a[m - 1][j]))
			dem++;
	return dem;
}
bool ktChinhPhuong(int n) {
	if ((int)sqrt(n) * (int)sqrt(n) == n)
		return 1;
	return 0;
}