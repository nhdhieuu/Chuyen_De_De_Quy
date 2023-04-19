#include <iostream>
#include <iomanip>
using namespace std;

bool ktChinhPhuong(int);
int TongCot(int[][100], int, int, int);

int main() {
	int m, n, c;
	int a[100][100];

	cout << "\nNhap vao m va n: ";
	cin >> m >> n;
	cout << "\nNhap vao cot: ";
	cin >> c;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cout << "\nTong cua cac phan tu la so chinh phuong trong cot c: ";
	int kq=TongCot(a, m, n, c);
	cout << kq;
	return 0;
}

bool ktChinhPhuong(int n) {
	for (int i = 1; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

int  TongCot(int a[][100], int m, int n, int c) {
	if (m == 0)
		return 0;
	int s=TongCot(a, m - 1, n, c);
	if (ktChinhPhuong(a[m - 1][c]))
		s = s + a[m - 1][c];
	return s;
}