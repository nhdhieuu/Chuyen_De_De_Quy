#include <iostream>
#include <iomanip>
using namespace std;
void XoaCot(float[][100], int, int&, int);

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
	cout << "Ma tran sau khi xu ly: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m - 1; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
void XoaCot(float a[][100], int m, int& n,int c)
{

	if (m == 0)
	{
		n--;
		return;
	}
	XoaCot(a, m - 1, n, c);
	for (int j = c; j <= n - 2; j++)
		a[m - 1][j] = a[m - 1][j + 1];
}