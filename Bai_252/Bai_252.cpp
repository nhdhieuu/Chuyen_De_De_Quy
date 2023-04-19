#include<iostream>
using namespace std;
void Nhap(int[][50], int, int);
int TonTaiDuong(int[][50], int, int);
int main() {
	int m;
	cout << "Nhap m: ";
	cin >> m;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[50][50];
	Nhap(a, m, n);
	if (TonTaiDuong(a, m, n) == 1)
		cout << "Ton tai duong!";
	else
		cout << "Khong ton tai duong!";
	return 0;
}
void Nhap(int a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int TonTaiDuong(int a[][50], int m, int n) {
	if (m == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[m - 1][i] > 0)
			return 1;
	return TonTaiDuong(a, m - 1, n);
}