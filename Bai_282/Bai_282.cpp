#include<iostream>
using namespace std;
void Nhap(float[][50], int, int);
float NhoNhatDong(float[][50], int, int, int);
void ThemCot(float[][50], int, int& );
void Xuat(float[][50], int, int);
int main() {
	int m;
	cout << "Nhap m: ";
	cin >> m;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float a[50][50];
	Nhap(a, m, n);
    ThemCot(a, m, n);
	Xuat(a, m, n);
	return 0;
}
void Nhap(float a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Xuat(float a[][50], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
float NhoNhatDong(float a[][50], int m, int n, int d) {
	if (n == 1)
		return a[d][0];
	float lc = NhoNhatDong(a, m, n - 1, d);
	if (lc > a[d][n - 1])
		lc = a[d][n - 1];
	return lc;
}
void ThemCot(float a[][50], int m, int& n) {
	if (m == 0) {
		n++;
		return;
	}
	ThemCot(a, m - 1, n);
	a[m - 1][n - 1] = NhoNhatDong(a, m, n-1, m - 1);
}