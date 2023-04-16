#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[][100], int&, int&);
int TichLe(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	cout << "Nhap so dong cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	Input(a, m, n);
	int kq = TichLe(a, m, n);
	cout << "Tich cac gia tri le tai vi tri cac dong co chi so chan la: " << kq;
	return 0;
}
void Input(int a[][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int TichLe(int a[][100], int m, int n)
{
	if (m == 0)
		return 1;
	int T = TichLe(a, m - 1, n);
	for (int j = 0; j < n; j++)
	{
		if (a[m - 1][j] % 2 != 0 && (m - 1) % 2 == 0)
			T = T * a[m - 1][j];
	}
	return T;
}