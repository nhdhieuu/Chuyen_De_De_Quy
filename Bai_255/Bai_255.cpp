#include <iostream>
using namespace std;
int ktToanDuong(float[][100], int, int);
int main() {
	float a[100][100];
	int n, m;
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	if (ktToanDuong(a, m, n) == 0)
		cout << "Mang khong toan duong";
	else
		cout << "Mang toan duong";
	return 0;
}
int ktToanDuong(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	if (m == 1)
	{
		int flag = 1;
		for (int j = 0;j < n;j++)
			if (a[0][j] <= 0)
				flag = 0;
		return flag;
	}
	for (int j = 0;j < n;j++)
		if (a[m - 1][j] <= 0)
			return 0;
	return ktToanDuong(a, m - 1, n);
}

