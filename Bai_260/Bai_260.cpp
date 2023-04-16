#include <iostream>
#include <iomanip>
using namespace std;
int ktDong(int[][100], int, int, int);
void LietKe(int[][100], int, int);
bool ktNguyenTo(int);
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
	cout << "Cac dong co chua so nguyen to la: ";
	LietKe(a, m, n);
	return 0;
}
int ktDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (ktNguyenTo(a[d][n - 1]))
		return 1;
	return ktDong(a, m, n - 1, d);
}
void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDong(a, m, n, m - 1) == 1)
		cout <<(m - 1)<<" ";
}
bool ktNguyenTo(int n) {
	if (n <= 1)
		return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}