#include <iostream>
#include <iomanip>
using namespace std;
int ktCotTang(float[][100], int, int, int);
void LietKe(float[][100], int, int);
int main() {
	float a[100][100];
	int n, m;
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	cout << "Cac cot tang trong ma tran la: ";
	LietKe(a, m, n);
	return 0;
}
int ktCotTang(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return 1;
	if (a[m - 3][c] <= a[m - 2][c] && ktCotTang(a, m - 1, n, c) == 1)
		return 1;
	return 0;
}
void LietKe(float a[][100], int m, int n)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1);
	if (ktCotTang(a, m, n, n - 1) == 1)
		cout << setw(4) << (n - 1);
}

