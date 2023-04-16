#include <iostream>
#include <iomanip>
using namespace std;
void DichPhai(float[][100], int, int);
void DichPhaiDong(float a[][100], int m, int n, int d);
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
	DichPhai(a, n, m);
	cout << "Ma tran sau khi xu ly: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
void DichPhaiDong(float a[][100],
	int m, int n, int d)
	{
	float temp = a[d][n - 1];
	for (int j = n - 1; j >= 1; j--)
		a[d][j] = a[d][j - 1];
	a[d][0] = temp;
}
void DichPhai(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	DichPhai(a, m - 1, n);
	DichPhaiDong(a, m, n, m - 1);
}