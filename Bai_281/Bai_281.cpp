#include <iostream>
#include <iomanip>
using namespace std;

float LonNhatCot(float[][100], int, int, int);
void ThemDong(float[][100], int&, int);
int main() {
	int m, n, d;
	float a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nmang sao khi them dong la: ";
	ThemDong(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(4);
	return 0;
}

float LonNhatCot(float a[][100], int m, int n, int c) {
	if (m == 1)
		return a[0][c];
	float lc = LonNhatCot(a, m - 1, n, c);
	if (a[m - 1][c] > lc)
		lc = a[m - 1][c];
	return lc;
}

void ThemDong(float a[][100], int& m, int n) {
	if (n == 0)
	{
		m++;
		return;

	}
	ThemDong(a, m, n - 1);
	a[m - 1][n - 1] = LonNhatCot(a, m - 1, n, n - 1);
}