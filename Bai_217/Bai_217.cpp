#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[][100], int&, int&);
float TongDong(float[][100], int, int, int);
void Output(float[][100], int, int);

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
	cout << "Nhap dong can xet: ";
	cin >> d;
	int kq = TongDong(a, m, n, d);
	cout << "Tong cac gia tri duong tren dong " << d << " la: " << kq;
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
float TongDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int s = TongDong(a, m, n - 1, d);
	if (a[d][n - 1] > 0)
		s += a[d][n - 1];
	return s;
}