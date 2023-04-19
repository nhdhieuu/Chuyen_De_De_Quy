#include <iostream>
#include <iomanip>
using namespace std;

int DemChan(int[][100], int, int);

int main() {
	int m, n, c;
	int a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	int kq = DemChan(a, m, n);
	cout << "\nSo luong so chan trong ma tran: " << kq;
	return 0;
}

int DemChan(int a[][100], int m, int n) {
	if (m == 0)
		return 0;
	int dem = DemChan(a, m - 1, n);
	for (int j = 0; j < n; j++) {
		if (a[m - 1][j] % 2 == 0)
			dem = dem + 1;
	}
	return dem;
}