#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[][100], int&, int&);
void Output(float[][100], int, int);
void DichTraiDong(float[][100], int, int, int);
void DichTrai(float[][100], int, int);

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
	DichTrai(a, m, n);
	cout << "Ma tran sau khi dich trai 1 dong la: " << endl;
	Output(a, m, n);
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
void DichTraiDong(float a[][100], int m, int n, int d)
{
	float temp = a[d][0];
	for (int j = 0; j < n - 1; j++)
		a[d][j] = a[d][j + 1];
	a[d][n - 1] = temp;
}
void DichTrai(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	DichTrai(a, m - 1, n);
	DichTraiDong(a, m, n, m - 1);
}