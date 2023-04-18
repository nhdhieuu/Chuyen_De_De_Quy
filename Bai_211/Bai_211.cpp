#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[][100], int&, int&);
float TongAm(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	cout << "Nhap so dong cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	Input(a, m, n);
	float kq = TongAm(a, m, n);
	cout << "Tong cac so am trong ma tran la: " << kq;
	return 0;
}
void Input(float a[][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
float TongAm(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongAm(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] < 0)
			s += a[m - 1][j];
	return s;
}