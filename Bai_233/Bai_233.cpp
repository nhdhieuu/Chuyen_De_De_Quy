#include <iostream>
#include <iomanip>
using namespace std;

bool ktHoanThien(int);
int DemHoanThien(int[][100], int, int, int);
int main() {
	int m, n, d;
	int a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	cout << "\nNhap vao dong: ";
	cin >> d;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nSo cac so hoan thien trong dong d: ";
	int kq = DemHoanThien(a, m, n, d);
	cout << kq;
	return 0;
}

bool ktHoanThien(int n) {
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	if (s == n)
		return true;
	return false;
}

int DemHoanThien(int a[][100], int m, int n, int d) {
	if (n == 0)
		return 0;
	int dem = DemHoanThien(a, m, n - 1, d);
	if (ktHoanThien(a[d][n - 1]))
		dem = dem + 1;
	return dem;
}