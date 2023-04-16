#include <iostream>
#include <iomanip>
using namespace std;
void SapCotTang(float[][100], int, int, int);

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
	cout << "Nhap cot: ";
	int c;
	cin >> c;
	SapCotTang(a, n, m, c);
	cout << "Ma tran sau khi xu ly: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout<< a[i][j]<<" ";
		cout << endl;
	}
	return 0;
}
void SapCotTang(float a[][100], int m, int n,
	int c)
	{
	if (m == 1)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (a[i][c] > a[m - 1][c])
		swap(a[i][c], a[m - 1][c]);
	SapCotTang(a, m - 1, n, c);
}