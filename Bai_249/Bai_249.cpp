#include <iostream>
using namespace std;
int ChinhPhuongLonNhat(int [][100], int, int);
bool ktChinhPhuong(int);
int main() {
	int a[100][100], n, m;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	int kq = ChinhPhuongLonNhat(a, m, n);
	cout << "Chinh phuong lon nhat:  " << kq;
	return 0;
}
int ChinhPhuongLonNhat(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = ChinhPhuongLonNhat(a, m - 1, n);
	for (int j = 0;j < n;j++)
		if (ktChinhPhuong(a[m - 1][j]))
			if (lc == -1 || a[m - 1][j] > lc)
				lc = a[m - 1][j];
	return lc;
}
