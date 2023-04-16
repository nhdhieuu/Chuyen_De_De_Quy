#include <iostream>
#include <iomanip>
using namespace std;
bool TonTaiHoanThien(int[][100], int, int);
bool ktHoanThien(int);
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
	if (TonTaiHoanThien(a, m, n))
		cout << "Ton tai so hoan thien trong ma tran";
	else
		cout << "Khong ton tai so hoan thien trong ma tran";
	return 0;
}
bool TonTaiHoanThien(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	for (int j = 0; j < n; j++)
		if (ktHoanThien(a[m - 1][j]))
		return 1;
	return TonTaiHoanThien(a, m - 1, n);
}
bool ktHoanThien(int n) {
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0)
			sum += i;
	}
	if (sum == n) return 1;
	return 0;
}