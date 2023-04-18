#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[][100], int&, int&);
float DuongDau(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	cout << "Nhap so dong cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	Input(a, m, n);
	float kq = DuongDau(a, m, n);
	if (kq != -1)
		cout << "Gia tri duong dau tien cua ma tran la: " << kq;
	else
		cout << "Ma tran khong co gia tri duong! ";
	return 0;
}
void Input(float a[][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
float DuongDau(float a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	float lc = DuongDau(a, m - 1, n);
	if (lc != -1)
		return lc;
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			return a[m - 1][j];
	return -1;
}