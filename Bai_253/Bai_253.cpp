#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[][100], int&, int&);
int TonTaiLe(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	cout << "Nhap so dong cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	Input(a, m, n);
	int kq = TonTaiLe(a, m, n);
	if (kq != 0)
		cout << "Ma tran ton tai so le!";
	else
		cout << "Ma tran khong ton tai so le!";
	return 0;
}
void Input(int a[][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int TonTaiLe(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 != 0)
			return 1;
	return TonTaiLe(a, m - 1, n);
}