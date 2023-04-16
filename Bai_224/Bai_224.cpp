#include <iostream>
using namespace std;
float TichCot(float[][100], int, int, int);
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
	cout << "Nhap cot can tinh: ";
	int c;
	cin >> c;
	int kq = TichCot(a, n, m, c);
	cout << "Ket qua: " << kq;

}
float TichCot(float a[][100], int m, int n, int c)
{
	if (m == 0)
		return 1;
	float T = TichCot(a, m - 1, n, c);
	if (a[m - 1][c] >= -1 && a[m - 1][c] <= 0)
		T = T * a[m - 1][c];
	return T;

}

