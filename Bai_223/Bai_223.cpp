#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[][100], int&, int&);
float TichCot(float[][100], int, int, int);
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
	int kq = TichCot(a, m, n, c);
	cout << "Tich cac gia tri duong tren cot " << c << " la: " << kq;
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
float TichCot(float a[][100], int m, int n, int c)
{
	if (m == 0)
		return 1;
	float T = TichCot(a, m - 1, n, c);
	if (a[m - 1][c] > 0)
		T *= a[m - 1][c];
	return T;
}
