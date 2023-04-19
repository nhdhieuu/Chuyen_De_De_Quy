#include <iostream>
#include <iomanip>
using namespace std;

int  ktDong(int [][100], int, int, int);
void LietKe(int[][100], int, int);
int main() {
	int m, n, d;
	int a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nLiet ke chi so cac dong chua toan gia tri chan trong ma tran : ";
	LietKe(a, m, n);
	return 0;
}

int ktDong(int a[][100], int m, int n, int d) {
	if (n == 0)
		return 0;

	if (n == 1)
	{
		if (a[d][0] % 2 == 0)
			return 1;
		else
			return 0;
	}
	if (a[d][n - 1] % 2 == 0 && ktDong(a, m, n - 1, d) == 1)
		return 1;
	return 0;
}

void LietKe(int a[][100], int m, int n) {
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDong(a, m, n, m - 1) == 1)
		cout << setw(4) << (m - 1);
}