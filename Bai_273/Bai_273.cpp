#include <iostream>
#include <cmath>
using namespace std;
void SapCotGiam(float[][100], int, int, int);

int main() {
	float a[100][100];
	int m, n, c;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	cout << "Nhap cot c: ";
	cin >> c;
	SapCotGiam(a, m, n, c);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j]<<" ";
		cout << endl;
	}
	return 0;
}
void SapCotGiam(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return;
	for (int i = 0;i <= m - 2;i++)
		if (a[i][c] < a[m - 1][c])
			swap(a[i][c], a[m - 1][c]);
	SapCotGiam(a, m - 1, n, c);
}