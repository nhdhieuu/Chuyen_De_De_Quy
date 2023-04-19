#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[][100], int&, int&);
int DemAm(float[][100], int, int, int);
void Output(float[][100], int, int);


int main()
{
	float a[100][100];
	int m, n, c;
	cout << "Nhap so dong cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	Input(a, m, n);
	cout << "Ma tran vua khoi tao la: " << endl;
	Output(a, m, n);
	cout << "Nhap cot can xet: ";
	cin >> c;
	int kq = DemAm(a, m, n, c);
	cout << "So luong cac gia tri am tren cot " << c << " la: " << kq;
	return 0;
}
void Input(float a[][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int DemAm(float a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemAm(a, m - 1, n, c);
	if (a[m - 1][c] < 0)
		dem++;
	return dem;
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
