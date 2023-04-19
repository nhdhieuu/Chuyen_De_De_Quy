#include <iostream>
#include <iomanip>
using namespace std;

void DichXuongCot(float[][100], int, int, int);
void DichXuong(float[][100], int, int);
int main() {
	int m, n, d;
	float a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nDich Xuong xoay vong cac hang trong ma tran: ";
	DichXuong(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(4);
	return 0;
}

void DichXuongCot(float a[][100], int m, int n, int c) {
	float temp = a[m - 1][c];
	for (int i = m - 1; i >= 1; i--)
		a[i][c] = a[i = 1][c];
	a[0][c] = temp;
}

void DichXuong(float a[][100], int m, int n) {
	if (n == 0)
		return;
	DichXuong(a, m, n - 1);
	DichXuongCot(a, m, n, n - 1);
}