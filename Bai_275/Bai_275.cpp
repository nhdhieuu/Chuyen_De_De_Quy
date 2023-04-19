#include <iostream>
#include <iomanip>
using namespace std;

void SapCotTang(float[][100], int, int, int);
void SapCotGiam(float[][100], int, int, int);
void SapXep(float[][100], int, int);

int main() {

	int m, n, d;
	float a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nmang sau khi sap xep la: ";
	SapXep(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(4);
	return 0;
}

void SapCotTang(float a[][100], int m, int n, int c) {
	if (m == 1)
		return;
	for (int i = 0; i < m - 1; i++)
		if (a[i][c] > a[m - 1][c])
			swap(a[i][c], a[m - 1][c]);
	SapCotTang(a, m - 1, n, c);
}

void SapCotGiam(float a[][100], int m, int n, int c) {
	if (m == 1)
		return;
	for (int i = 0; i < m - 1; i++)
		if (a[i][c] < a[m - 1][c])
			swap(a[i][c], a[m - 1][c]);
	SapCotGiam(a, m - 1, n, c);
}

void SapXep(float a[][100], int m, int n) {
	if (n == 1)
		return;
	if ((n - 1) % 2 == 0)
		SapCotTang(a, m, n, n - 1);
	else
		SapCotGiam(a, m, n, n - 1);
}