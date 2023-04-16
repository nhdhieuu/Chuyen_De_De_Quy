#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[][100], int&, int&);
void Output(float[][100], int, int);
void XoaDong(float[][100], int&, int, int);

int main()
{
	float a[100][100];
	int m, n, d;
	cout << "Nhap so dong cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	Input(a, m, n);
	cout << "Ma tran vua khoi tao la: " << endl;
	Output(a, m, n);
	cout << "Nhap dong can xoa: ";
	cin >> d;
	XoaDong(a, m, n, d);
	cout << "Ma tran sau xoa dong " << d << " la: " << endl;
	Output(a, m, n);
	return 0;
}
void Input(float a[][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Output(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(7) << a[i][j];
		cout << endl;
	}
}
void XoaDong(float a[][100], int& m, int n, int d)
{
	if (n == 0)
	{
		m--;
		return;
	}
	XoaDong(a, m, n - 1, d);
	for (int i = d; i < m - 1; i++)
		a[i][n - 1] = a[i + 1][n - 1];
}