#include <iostream>
#include <iomanip>
using namespace std;
float TichDong(float[][100], int, int, int);
void ThemCot(float[][100], int, int&);

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
	ThemCot(a, n, m);
	cout << "Ma tran sau khi xu ly: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m ; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
float TichDong(float a[][100], int m, int n,int d)
	{
	if (n == 1)
		return a[d][0];
	return TichDong(a, m, n - 1, d) * a[d][n - 1];
	}
void ThemCot(float a[][100], int m, int& n)
{
	if (m == 0)
		{
		n++;
		return;
		}
	ThemCot(a, m - 1, n);
	a[m - 1][n - 1] = TichDong(a, m, n - 1, m - 1);
}