#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[][100], int&, int&);
void LietKe(int[][100], int, int, int);
int ktDang3m(int);

int main()
{
	int a[100][100];
	int m, n, d;
	cout << "Nhap so dong cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	Input(a, m, n);
	cout << "Nhap dong can xet: ";
	cin >> d;
	cout << "Cac phan tu co dang 3^m tren dong " << d << " la: ";
	LietKe(a, m, n, d);
	return 0;
}
void Input(int a[][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void LietKe(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1, d);
	if (ktDang3m(a[d][n - 1]) == 1)
		cout << setw(4) << a[d][n - 1];
}
int ktDang3m(int n)
{
	int flag = 1;
	for (int t = n; t > 1; t /= 3)
	{
		int du = t % 3;
		if (du != 0)
			flag = 0;
	}
	return flag;
}