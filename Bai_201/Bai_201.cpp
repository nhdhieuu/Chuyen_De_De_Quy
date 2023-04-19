#include <iostream>
#include <iomanip>
using namespace std;
void LietKe(int[][100], int, int,int);
int main() {
	int a[100][100], n, m,c;
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	cout << "Nhap cot c: ";
	cin >> c;
	cout << "Tat ca cac so chan trong ma tran: ";
	LietKe(a, n, m,c);
	return 0;
}
void LietKe(int a[][100], int m, int n,int c) {
	if (m == 0)
		return;
	LietKe(a, m - 1, n,c);
	for (int j = 0; j < n; j++)
		if (a[m - 1][c] % 2 == 0)
			cout << setw(4) << a[m - 1][j];
}
