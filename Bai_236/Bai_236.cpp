#include <iostream>
using namespace std;
int DemNguyenTo(int[][100], int, int, int);
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
	cout << "Nhap cot can dem: ";
	int c;
	cin >> c;
	int kq = DemNguyenTo(a, n, m, c);
	cout << "Ket qua: " << kq;
}

int DemNguyenTo(int a[][100], int m, int n,int c)
{
	if(m == 0) 
		return 0;
	int dem = DemNguyenTo(a, m - 1, n, c);
	if (ktNguyenTo(a[m - 1][c]))
		dem = dem + 1;
	return dem;
}
bool ktNguyenTo(int n) {
	if (n <= 1)
		return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}