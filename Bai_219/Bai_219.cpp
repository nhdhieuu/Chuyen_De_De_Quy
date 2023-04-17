#include <iostream>
using namespace std;
int TichCot(int[][100], int, int, int);

int main() {
	int a[100][100], m, n,c;
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
	int kq = TichCot(a, m, n, c);
	cout << "Tich cac so chan treb cot c:  " << kq;
	return 0;
}
int TichCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 1;
	int T = TichCot(a, m - 1, n, c);
	if (a[m - 1][c] % 2 == 0)
		T = T * a[m - 1][c];
	return T;
}