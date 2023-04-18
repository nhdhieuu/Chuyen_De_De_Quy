#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[][100], int&, int&);
int DemToanChan(int[][100], int, int);
int ktToanChan(int);

int main()
{
	int a[100][100];
	int m, n;
	cout << "Nhap so dong cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	Input(a, m, n);
	int kq = DemToanChan(a, m, n);
	cout << "So luong so nguyen toan chan trong ma tran la: " << kq;
	return 0;
}
void Input(int a[][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int ktToanChan(int n)
{
	n = abs(n);
	for (int i = n; i > 0; i /= 10)
	{
		int dt = i % 10;
		if (dt % 2 != 0)
			return 0;
	}
	return 1;
}
int DemToanChan(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemToanChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktToanChan(a[m - 1][j]) == 1)
			dem++;
	return dem;
}