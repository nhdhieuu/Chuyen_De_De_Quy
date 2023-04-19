#include<iostream>
using namespace std;
void Nhap(int [][50], int, int);
int TongCot(int[][50], int, int, int);
bool KiemTra(int);
int main() {
	int m;
	cout << "Nhap m: ";
	cin >> m;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int c;
	cout << "Nhap c: ";
	cin >> c;
	int a[50][50];
	Nhap(a, m, n);
	cout << "Tong Cot: " << TongCot(a, m, n, c);
	return 0;
}
void Nhap(int a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int TongCot(int a[][50], int m, int n, int c) {
	if (m == 0)
		return 0;
	int s = TongCot(a, m - 1, n, c);
	if (KiemTra(a[m - 1][c]))
		s = s + a[m - 1][c];
	return s;
}
bool KiemTra(int n) {
	int i = 1;
	while (true) {
		if (pow(2, i) == n)
			return true;
		if (pow(2, i) > n)
			return false;
		i++;
	}
}