#include <iostream>
using namespace std;
int TongNguyenTo(int[][100], int, int);
bool ktNguyenTo(int);
int main() {
	int a[100][100], n, m;
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	cout << "Nhap cac phan tu cho ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	int kq = TongNguyenTo(a, n, m);
	cout << "Tong cac so chinh phuong nam tren cot le: " << kq;
	return 0;
}
int TongNguyenTo(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongNguyenTo(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]) && j % 2 != 0)
			s = s + a[m - 1][j];
	return s;
}
bool ktNguyenTo(int n)
{
	for (int i = 2;i <= sqrt(n);i++)
		if (n % i == 0)
			return 0;
	return 1;
}