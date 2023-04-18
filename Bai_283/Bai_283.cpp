#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[][100], int&, int&);
void Output(float[][100], int, int);
float TongCot(float[][100], int, int, int);
void ThemDong(float[][100], int&, int);

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
	ThemDong(a, m, n);
	cout << "Ma tran sau khi them dong la: " << endl;
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
float TongCot(float a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	return TongCot(a, m - 1, n, c) + a[m - 1][c];
}
void ThemDong(float a[][100], int& m, int n)
{
	if (n == 0)
	{
		m++;
		return;
	}
	ThemDong(a, m, n - 1);
	a[m - 1][n - 1] = TongCot(a, m - 1, n, n - 1);
}