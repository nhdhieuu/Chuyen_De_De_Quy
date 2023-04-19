#include <iostream>
#include <iomanip>
using namespace std;

float ktCotGiam(float[][100], int, int, int);
int main() {
	int m, n, c;
	float a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	cout << "\nNhap vao cot c: ";
	cin >> c;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nKiem tra cot c co giam hay khong : ";
	int kq = ktCotGiam(a, m, n,c);
	cout << kq;
	return 0;
}

float ktCotGiam(float a[][100], int m, int n, int c) {
	if (m == 1)
		return 1;
	if (a[m - 2][c] >= a[m - 1][c] && ktCotGiam(a, m - 1, n, c) == 1)
		return 1;
	return 0;
}