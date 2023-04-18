#include<iostream>
using namespace std;
void Nhap(int[][50], int, int);
int DemHoanThien(int[][50], int, int);
bool KiemTra(int);
int main() {
	int m;
	cout << "Nhap m: ";
	cin >> m;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[50][50];
	Nhap(a, m, n);
	cout << "So phan tu hoan thien: " << DemHoanThien(a, m, n);
	return 0;
}
void Nhap(int a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int DemHoanThien(int a[][50], int m, int n) {
	if (m == 0)
		return 0;
	int dem = DemHoanThien(a, m - 1, n);
	for (int i = 0; i < n; i++)
		if (KiemTra(a[m - 1][i]))
			dem++;
	return dem;
}
bool KiemTra(int n) {
	int s = 0;
	int i = 1;
	while (i < n) {
		if (n % i == 0)
			s = s + i;
		i++;
	}
	if (s == n)
		return true;
	return false;
}