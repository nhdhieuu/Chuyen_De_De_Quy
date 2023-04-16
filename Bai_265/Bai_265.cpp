#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[][100], int&, int&);
void Output(float[][100], int, int);
int ktDongGiam(float[][100], int, int, int);
void LietKe(float[][100], int, int);

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
	cout << "Cac dong giam dan trong ma tran la: ";
	LietKe(a, m, n);
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
int ktDongGiam(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return 1;
	if (a[d][n - 2] >= a[d][n - 1] && ktDongGiam(a, m, n - 1, d) == 1)
		return 1;
	return 0;
}
void LietKe(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDongGiam(a, m, n, m - 1) == 1)
		cout << setw(4) << m - 1;
}
