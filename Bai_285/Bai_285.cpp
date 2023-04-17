#include <iostream>
#include <cmath>
using namespace std;
void BienDoi(float[][100], int, int);
int main() {
	float a[100][100];
	int m, n;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	BienDoi(a, m, n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
void BienDoi(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	BienDoi(a, m - 1, n);
	for (int j = 0;j < n;j++)
		if (a[m - 1][j] < 0)
			a[m - 1][j] = -a[m - 1][j];
}

