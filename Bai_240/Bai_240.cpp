#include<iostream>
using namespace std;
void Nhap(int[][50], int, int);
int ChanDau(int[][50], int, int);
int main() {
	int m;
	cout << "Nhap m: ";
	cin >> m;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[50][50];
	Nhap(a, m, n);
	cout << "Phan tu chan dau la: " << ChanDau(a, m, n);
	return 0;
}
void Nhap(int a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int ChanDau(int a[][50], int m, int n) {
	if (m == 0)
		return -1;
	int lc = ChanDau(a, m-1, n);
	for (int i = 0; i < n; i++)
		if (a[m - 1][i] % 2 == 0)
			return a[m - 1][i];
	return lc;
}